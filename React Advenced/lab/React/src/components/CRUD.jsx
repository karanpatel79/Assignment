import { useEffect, useState } from "react";
import axios from "axios";

function CRUD() {
  const [users, setUsers] = useState([]);
  const [name, setName] = useState("");

  const API = "http://localhost:3000/users";

  useEffect(() => {
    axios.get(API).then(res => setUsers(res.data));
  }, []);

  const addUser = () => {
    axios.post(API, { name }).then(res => {
      setUsers([...users, res.data]);
      setName("");
    });
  };

  const deleteUser = (id) => {
    axios.delete(`${API}/${id}`).then(() => {
      setUsers(users.filter(u => u.id !== id));
    });
  };

  return (
    <div>
      <input value={name} onChange={e => setName(e.target.value)} />
      <button onClick={addUser}>Add</button>

      {users.map(u => (
        <div key={u.id}>
          {u.name}
          <button onClick={() => deleteUser(u.id)}>Delete</button>
        </div>
      ))}
    </div>
  );
}

export default CRUD;