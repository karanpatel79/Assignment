import { atom, useRecoilState } from "recoil";
import { useState } from "react";

const todoState = atom({
  key: "todoState",
  default: []
});

function Todo() {
  const [todos, setTodos] = useRecoilState(todoState);
  const [text, setText] = useState("");

  const add = () => {
    setTodos([...todos, { text }]);
    setText("");
  };

  return (
    <div>
      <input value={text} onChange={e => setText(e.target.value)} />
      <button onClick={add}>Add</button>

      {todos.map((t, i) => <p key={i}>{t.text}</p>)}
    </div>
  );
}

export default Todo;