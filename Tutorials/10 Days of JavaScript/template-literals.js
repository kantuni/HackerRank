function sides(literals, ...expressions) {
  const [area, perimeter] = expressions;
  const s1 = (perimeter + Math.sqrt(perimeter * perimeter - 16 * area)) / 4;
  const s2 = (perimeter - Math.sqrt(perimeter * perimeter - 16 * area)) / 4;
  return [s1, s2].sort();
}
