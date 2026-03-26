import { signInWithPopup } from "firebase/auth";
import { auth, provider } from "../firebase/firebase";

function Login() {
  const login = () => {
    signInWithPopup(auth, provider)
      .then(res => console.log(res.user))
      .catch(err => console.log(err));
  };

  return <button onClick={login}>Login with Google</button>;
}

export default Login;