import { useState } from "react";
import { useNavigate, Link } from "react-router-dom";
import { loginUser } from "../services/authService";
import { setAuth } from "../services/api";
import { toast } from "react-toastify";

function Login() {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [loading, setLoading] = useState(false);
  const navigate = useNavigate();

  const handleLogin = async () => {
    if (!email || !password) { toast.error("Please fill all fields"); return; }
    setLoading(true);
    try {
      const res = await loginUser({ email, password });
      localStorage.setItem("user", JSON.stringify(res.data));
      localStorage.setItem("role", res.data.role);
      setAuth(email, password);
      toast.success("Login successful!");
      navigate("/dashboard");
    } catch (err) {
      const msg = err.response?.data;
      toast.error(typeof msg === "string" ? msg : "Login failed");
    } finally {
      setLoading(false);
    }
  };

  return (
    <div className="min-h-screen bg-gradient-to-br from-purple-50 via-white to-purple-100 flex items-center justify-center p-4">
      <div className="bg-white rounded-3xl shadow-xl border border-purple-100 w-full max-w-md p-10">
        <div className="text-center mb-8">
          <div className="w-14 h-14 bg-purple-600 rounded-2xl flex items-center justify-center mx-auto mb-4 shadow-lg">
            <span className="text-white text-2xl">⚡</span>
          </div>
          <h1 className="text-3xl font-bold text-gray-800">Welcome back</h1>
          <p className="text-gray-400 mt-1 text-sm">Sign in to your OMS account</p>
        </div>

        <div className="space-y-4">
          <div>
            <label className="text-sm font-medium text-gray-700 block mb-1">Email</label>
            <input type="email" placeholder="you@example.com" className="input" value={email} onChange={e => setEmail(e.target.value)} />
          </div>
          <div>
            <label className="text-sm font-medium text-gray-700 block mb-1">Password</label>
            <input type="password" placeholder="••••••••" className="input" value={password} onChange={e => setPassword(e.target.value)} />
          </div>
          <div className="text-right">
            <Link to="/forgot-password" className="text-sm text-purple-600 hover:underline">Forgot Password?</Link>
          </div>
          <button onClick={handleLogin} disabled={loading} className="btn w-full mt-2">
            {loading ? "Signing in..." : "Sign In"}
          </button>
        </div>

        <p className="text-sm text-center mt-6 text-gray-500">
          Don't have an account?{" "}
          <Link to="/register" className="text-purple-600 font-medium hover:underline">Register</Link>
        </p>
      </div>
    </div>
  );
}

export default Login;