function getLetter(s) {
  const first = s.charAt(0)
  let letter = null
  switch (first) {
    case "a":
    case "e":
    case "i":
    case "o":
    case "u": {
      letter = "A"
      break
    }
    case "b":
    case "c":
    case "d":
    case "f":
    case "g": {
      letter = "B"
      break
    }
    case "h":
    case "j":
    case "k":
    case "l":
    case "m": {
      letter = "C"
      break
    }
    default: {
      letter = "D"
    }
  }
  return letter
}
