class Polygon {
  constructor(lengths) {
    this.lengths = lengths
  }

  perimeter() {
    return this.lengths.reduce((acc, curr) => acc + curr)
  }
}
