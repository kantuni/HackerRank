const button = document.createElement("button")
button.setAttribute("id", "btn")
button.textContent = "0"
document.body.appendChild(button)

button.addEventListener("click", () => {
  const value = Number(button.textContent)
  button.textContent = String(value + 1)
})
