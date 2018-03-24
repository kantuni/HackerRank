document.getElementById('btn5').addEventListener('click', e => {
  const buttons = [...document.querySelectorAll('#btns button')];
  const offset = [3, -1, -1, 3, 0, -3, 1, 1, -3];
  for (button of buttons) {
    const index = Number(button.textContent);
    button.textContent = (index + offset[index - 1]).toString();
  }
});
