import { Link } from "react-router-dom";

function Navbar() {
  return (
    <nav>
      <Link to="/">Home</Link> |
      <Link to="/about">About</Link> |
      <Link to="/contact">Contact</Link> |
      <Link to="/counter">Counter</Link> |
      <Link to="/users">Users</Link> |
      <Link to="/crud">CRUD</Link> |
      <Link to="/ref">useRef</Link> |
      <Link to="/theme">Theme</Link> |
      <Link to="/login">Login</Link> |
      <Link to="/todo">Todo</Link>
    </nav>
  );
}

export default Navbar;