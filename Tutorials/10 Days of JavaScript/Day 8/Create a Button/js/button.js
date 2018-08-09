(function () {
  const button = document.createElement('button')
  Object.assign(button, {
    id: "btn",
    textContent: "0"
  })
  document.body.appendChild(button)

  button.addEventListener("click", e => {
    const value = Number(button.textContent)
    button.textContent = String(value + 1)
  })
})()
