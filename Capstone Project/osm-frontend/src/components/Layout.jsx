import { Link, useLocation, useNavigate } from "react-router-dom";
import { getRole, getUser } from "../utils/auth";
import {
  LayoutDashboard, Package, ShoppingCart, Users, ClipboardList, LogOut
} from "lucide-react";

function Layout({ children }) {
  const location = useLocation();
  const navigate = useNavigate();
  const role = getRole();
  const user = getUser();

  const linkClass = (path) =>
    `flex items-center gap-3 px-4 py-2.5 rounded-xl transition-all text-sm font-medium ${
      location.pathname === path
        ? "bg-purple-600 text-white shadow-md"
        : "text-gray-500 hover:bg-purple-50 hover:text-purple-700"
    }`;

  const handleLogout = () => {
    localStorage.clear();
    navigate("/");
  };

  return (
    <div className="flex h-screen bg-gray-50">
      {/* Sidebar */}
      <div className="w-64 bg-white border-r border-purple-100 p-5 flex flex-col justify-between shadow-sm">
        <div>
          <div className="mb-8">
            <h1 className="text-2xl font-bold text-purple-700 tracking-tight">⚡ OMS</h1>
            <p className="text-xs text-gray-400 mt-1">Order Management System</p>
          </div>

          <nav className="flex flex-col gap-1.5">
            <Link to="/dashboard" className={linkClass("/dashboard")}>
              <LayoutDashboard size={18} /> Dashboard
            </Link>
            <Link to="/products" className={linkClass("/products")}>
              <Package size={18} /> Products
            </Link>

            {role === "CUSTOMER" && (
              <Link to="/my-orders" className={linkClass("/my-orders")}>
                <ShoppingCart size={18} /> My Orders
              </Link>
            )}

            {role === "ADMIN" && (
              <>
                <Link to="/orders" className={linkClass("/orders")}>
                  <ClipboardList size={18} /> All Orders
                </Link>
                <Link to="/admin/users" className={linkClass("/admin/users")}>
                  <Users size={18} /> Customers
                </Link>
              </>
            )}
          </nav>
        </div>

        <div>
          <div className="mb-3 p-3 bg-purple-50 rounded-xl border border-purple-100">
            <p className="text-sm font-semibold text-purple-800">{user?.name || "Guest"}</p>
            <p className="text-xs text-gray-400 truncate">{user?.email || ""}</p>
            <span className="inline-block mt-1 text-xs bg-purple-200 text-purple-700 px-2 py-0.5 rounded-full">
              {role}
            </span>
          </div>
          <button
            onClick={handleLogout}
            className="w-full flex items-center justify-center gap-2 bg-red-50 text-red-500 py-2 rounded-xl hover:bg-red-100 transition text-sm font-medium"
          >
            <LogOut size={16} /> Logout
          </button>
        </div>
      </div>

      {/* Main Content */}
      <div className="flex-1 p-8 overflow-y-auto">
        {children}
      </div>
    </div>
  );
}

export default Layout;