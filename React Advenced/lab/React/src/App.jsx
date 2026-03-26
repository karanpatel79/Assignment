import { BrowserRouter, Routes, Route } from "react-router-dom";

import Navbar from "./components/Navbar";
import Home from "./components/Home";
import About from "./components/About";
import Contact from "./components/Contact";

import Counter from "./components/Counter";
import Users from "./components/Users";
import CRUD from "./components/CRUD";
import RefExample from "./components/RefExample";
import ThemeToggle from "./components/ThemeToggle";
import Login from "./components/Login";
import Todo from "./components/Todo";

function App() {
  return (
    <BrowserRouter>
      <Navbar />

      <Routes>
        <Route path="/" element={<Home />} />
        <Route path="/about" element={<About />} />
        <Route path="/contact" element={<Contact />} />

        <Route path="/counter" element={<Counter />} />
        <Route path="/users" element={<Users />} />
        <Route path="/crud" element={<CRUD />} />
        <Route path="/ref" element={<RefExample />} />
        <Route path="/theme" element={<ThemeToggle />} />
        <Route path="/login" element={<Login />} />
        <Route path="/todo" element={<Todo />} />
      </Routes>
    </BrowserRouter>
  );
}

export default App;