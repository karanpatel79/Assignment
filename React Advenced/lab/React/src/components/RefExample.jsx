import { useRef } from "react";

function RefExample() {
  const ref = useRef(0);

  const handleClick = () => {
    ref.current++;
    console.log(ref.current);
  };

  return <button onClick={handleClick}>Click</button>;
}

export default RefExample;