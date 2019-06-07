function sides(literals, ...expressions) {
  const [area, perimeter] = expressions
  const tmp = Math.sqrt(perimeter * perimeter - 16 * area)
  const s1 = (perimeter + tmp) / 4
  const s2 = (perimeter - tmp) / 4
  return [s1, s2].sort();
}
