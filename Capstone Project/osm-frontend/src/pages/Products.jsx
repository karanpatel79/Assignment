import { useEffect, useState } from "react";
import Layout from "../components/Layout";
import API from "../services/api";
import { getRole, getUser } from "../utils/auth";
import { useNavigate } from "react-router-dom";
import { Plus, Pencil, Trash2, ShoppingCart } from "lucide-react";
import { toast } from "react-toastify";

function Products() {
  const [products, setProducts] = useState([]);
  const [search, setSearch] = useState("");
  const [loading, setLoading] = useState(false);
  const [quantities, setQuantities] = useState({});
  const role = getRole();
  const user = getUser();
  const navigate = useNavigate();

  useEffect(() => { fetchProducts(); }, []);

  const fetchProducts = async () => {
    setLoading(true);
    try {
      const res = await API.get("/products");
      setProducts(res.data);
    } catch { toast.error("Error loading products"); }
    finally { setLoading(false); }
  };

  const handleDelete = async (id) => {
    if (!confirm("Delete this product?")) return;
    try {
      await API.delete(`/products/${id}`);
      toast.success("Product deleted!");
      fetchProducts();
    } catch { toast.error("Error deleting product"); }
  };

  const placeOrder = async (product) => {
    const qty = quantities[product.id] || 1;
    if (qty > product.stockQuantity) { toast.error("Not enough stock"); return; }
    try {
      await API.post("/orders", { userId: user.id, items: [{ productId: product.id, quantity: qty }] });
      toast.success("Order placed successfully!");
      fetchProducts();
    } catch { toast.error("Error placing order"); }
  };

  const filtered = products.filter(p => p?.name?.toLowerCase().includes(search.toLowerCase()));

  return (
    <Layout>
      <div className="flex items-center justify-between mb-6">
        <div>
          <h2 className="text-3xl font-bold text-gray-800">Products</h2>
          <p className="text-gray-400 text-sm mt-1">{products.length} products available</p>
        </div>
        {role === "ADMIN" && (
          <button onClick={() => navigate("/add-product")} className="btn flex items-center gap-2">
            <Plus size={16} /> Add Product
          </button>
        )}
      </div>

      <div className="mb-4">
        <input placeholder="🔍 Search products..." className="input max-w-sm" onChange={e => setSearch(e.target.value)} />
      </div>

      {loading ? (
        <div className="text-center py-16 text-purple-400 font-medium">Loading products...</div>
      ) : (
        <div className="card p-0 overflow-hidden">
          <table className="w-full">
            <thead className="bg-purple-50">
              <tr>
                <th className="table-head">Product</th>
                <th className="table-head">Category</th>
                <th className="table-head">Price</th>
                <th className="table-head">Stock</th>
                <th className="table-head">Actions</th>
              </tr>
            </thead>
            <tbody>
              {filtered.map(p => (
                <tr key={p.id} className="hover:bg-purple-50/30 transition-colors">
                  <td className="table-cell font-medium text-gray-800">{p.name}</td>
                  <td className="table-cell">
                    <span className="bg-purple-100 text-purple-700 px-2 py-0.5 rounded-full text-xs">{p.category}</span>
                  </td>
                  <td className="table-cell font-semibold text-purple-700">₹{p.price}</td>
                  <td className="table-cell">
                    <span className={`px-2 py-0.5 rounded-full text-xs font-medium ${p.stockQuantity > 0 ? "bg-green-100 text-green-700" : "bg-red-100 text-red-600"}`}>
                      {p.stockQuantity > 0 ? `${p.stockQuantity} in stock` : "Out of stock"}
                    </span>
                  </td>
                  <td className="table-cell">
                    <div className="flex items-center gap-2">
                      {role === "CUSTOMER" && (
                        <>
                          <input
                            type="number" min="1" max={p.stockQuantity}
                            value={quantities[p.id] || 1}
                            onChange={e => setQuantities({ ...quantities, [p.id]: Number(e.target.value) })}
                            className="w-16 border border-purple-200 p-1.5 rounded-lg text-sm text-center"
                          />
                          <button onClick={() => placeOrder(p)} disabled={p.stockQuantity === 0} className="btn-success flex items-center gap-1">
                            <ShoppingCart size={14} /> Order
                          </button>
                        </>
                      )}
                      {role === "ADMIN" && (
                        <>
                          <button onClick={() => navigate(`/edit-product/${p.id}`)} className="flex items-center gap-1 bg-blue-50 text-blue-600 px-3 py-1.5 rounded-lg text-sm hover:bg-blue-100 transition">
                            <Pencil size={14} /> Edit
                          </button>
                          <button onClick={() => handleDelete(p.id)} className="btn-danger flex items-center gap-1">
                            <Trash2 size={14} /> Delete
                          </button>
                        </>
                      )}
                    </div>
                  </td>
                </tr>
              ))}
            </tbody>
          </table>
          {filtered.length === 0 && <div className="text-center py-12 text-gray-400">No products found</div>}
        </div>
      )}
    </Layout>
  );
}

export default Products;