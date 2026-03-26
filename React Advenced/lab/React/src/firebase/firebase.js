import { initializeApp } from "firebase/app";
import { getAuth, GoogleAuthProvider } from "firebase/auth";

const config = {
  apiKey: "YOUR_KEY",
  authDomain: "YOUR_DOMAIN"
};

const app = initializeApp(config);

export const auth = getAuth(app);
export const provider = new GoogleAuthProvider();