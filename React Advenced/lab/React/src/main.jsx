import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App";

import { Provider } from "react-redux";
import { store } from "./redux/store";

import { ThemeProvider } from "./context/ThemeContext";
import { RecoilRoot } from "recoil";   // ✅ ADD THIS

ReactDOM.createRoot(document.getElementById("root")).render(
  <Provider store={store}>
    <ThemeProvider>
      <RecoilRoot>   {/* ✅ WRAP HERE */}
        <App />
      </RecoilRoot>
    </ThemeProvider>
  </Provider>
);