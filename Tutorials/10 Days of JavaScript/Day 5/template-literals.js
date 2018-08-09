function sides(literals, ...expressions) {
  const [A, P] = expressions
  const s1 = (P + Math.sqrt(P * P - 16 * A)) / 4
  const s2 = (P - Math.sqrt(P * P - 16 * A)) / 4
  return [s1, s2].sort();
}
