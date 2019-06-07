document.getElementById("btn5").addEventListener("click", () => {
  const buttons = [...document.querySelectorAll("#btns button")]
  const offset = [3, -1, -1, 3, 0, -3, 1, 1, -3]
  buttons.forEach(button => {
    const index = Number(button.textContent)
    button.textContent = String(index + offset[index - 1])
  })
})
