(function () {
  document.getElementById("btn0").addEventListener("click", e => {
    document.getElementById("res").textContent += "0"
  })

  document.getElementById("btn1").addEventListener("click", e => {
    document.getElementById("res").textContent += "1"
  })

  document.getElementById("btnClr").addEventListener("click", e => {
    document.getElementById("res").textContent = ""
  })

  document.getElementById("btnEql").addEventListener("click", e => {
    const res = document.getElementById("res")
    const re = /(\d+)([\+\-\*\/])(\d+)/
    let [_, operand1, operator, operand2] = res.textContent.match(re)
    operand1 = parseInt(operand1, 2)
    operand2 = parseInt(operand2, 2)
    res.textContent = Math.floor(eval(operand1 + operator + operand2)).toString(2)
  })

  document.getElementById("btnSum").addEventListener("click", e => {
    document.getElementById("res").textContent += "+"
  })

  document.getElementById("btnSub").addEventListener("click", e => {
    document.getElementById("res").textContent += "-"
  })

  document.getElementById("btnMul").addEventListener("click", e => {
    document.getElementById("res").textContent += "*"
  })

  document.getElementById("btnDiv").addEventListener("click", e => {
    document.getElementById("res").textContent += "/"
  })
})()
