import { useEffect, useState } from "react";
import Layout from "../components/Layout";
import API from "../services/api";
import { useNavigate } from "react-router-dom";
import { Eye, ShieldOff, ShieldCheck } from "lucide-react";
import { toast } from "react-toastify";

function AdminUsers() {
  const [users, setUsers] = useState([]);
  const navigate = useNavigate();

  useEffect(() => { fetchUsers(); }, []);

  const fetchUsers = async () => {
    try {
      const res = await API.get("/admin/users");
      setUsers(res.data);
    } catch { toast.error("Error loading users"); }
  };

  const toggleBlock = async (id) => {
    try {
      await API.put(`/admin/block/${id}`);
      fetchUsers();
      toast.success("User status updated!");
    } catch { toast.error("Error updating user"); }
  };

  return (
    <Layout>
      <div className="mb-6">
        <h2 className="text-3xl font-bold text-gray-800">Customers</h2>
        <p className="text-gray-400 text-sm mt-1">{users.length} registered customers</p>
      </div>

      <div className="card p-0 overflow-hidden">
        <table className="w-full">
          <thead className="bg-purple-50">
            <tr>
              <th className="table-head">Customer</th>
              <th className="table-head">Email</th>
              <th className="table-head">Status</th>
              <th className="table-head">Actions</th>
            </tr>
          </thead>
          <tbody>
            {users.map(u => (
              <tr key={u.id} className="hover:bg-purple-50/30 transition-colors">
                <td className="table-cell font-medium text-gray-800">{u.name}</td>
                <td className="table-cell text-gray-500">{u.email}</td>
                <td className="table-cell">
                  <span className={`px-2 py-0.5 rounded-full text-xs font-medium ${u.blocked ? "bg-red-100 text-red-600" : "bg-green-100 text-green-700"}`}>
                    {u.blocked ? "Blocked" : "Active"}
                  </span>
                </td>
                <td className="table-cell">
                  <div className="flex gap-2">
                    <button
                      onClick={() => toggleBlock(u.id)}
                      className={`flex items-center gap-1 px-3 py-1.5 rounded-lg text-sm transition ${u.blocked ? "bg-green-50 text-green-600 hover:bg-green-100" : "bg-red-50 text-red-500 hover:bg-red-100"}`}
                    >
                      {u.blocked ? <><ShieldCheck size={14} /> Unblock</> : <><ShieldOff size={14} /> Block</>}
                    </button>
                    <button
                      onClick={() => navigate(`/admin/orders/${u.id}`)}
                      className="flex items-center gap-1 bg-purple-50 text-purple-600 px-3 py-1.5 rounded-lg text-sm hover:bg-purple-100 transition"
                    >
                      <Eye size={14} /> Orders
                    </button>
                  </div>
                </td>
              </tr>
            ))}
          </tbody>
        </table>
        {users.length === 0 && <div className="text-center py-12 text-gray-400">No customers found</div>}
      </div>
    </Layout>
  );
}

export default AdminUsers;