function getMaxLessThanK(n, k) {
  let max = 0;
  for (let a = 1; a <= n; a++) {
    for (let b = a + 1; b <= n; b++) {
      if ((a & b) < k) max = Math.max(max, a & b);
    }
  }
  return max;
}
