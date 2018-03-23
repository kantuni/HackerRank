const button = document.createElement('button');
Object.assign(button, {
  id: 'btn',
  innerText: '0'
});
document.body.appendChild(button);

button.addEventListener('click', e => {
  const value = Number(button.innerText);
  button.innerText = String(value + 1);
});
