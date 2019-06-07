class Polygon {
  constructor(lengths) {
    this.lengths = lengths
  }

  perimeter() {
    const reducer = (accumulator, currentValue) => accumulator + currentValue
    return this.lengths.reduce(reducer)
  }
}
