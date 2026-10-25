import { convertToCaps } from "./converter.js";
const fileInput = document.getElementById("myFile");
const msg = document.getElementById("msg");
const err = document.getElementById("err");

fileInput.addEventListener("change", async () => {
  msg.textContent = "";








  err.textContent = "";

  try {
    const file = fileInput.files[0];
    if (!file) return;

    if (!file.name.endsWith(".txt")) {
      throw new Error("Only .txt files are allowed.");
    }

    const text = await file.text();
    const result =convertToCaps(text);

    msg.textContent = result;
  } catch (error) {
    err.textContent = error.message;
  }
});