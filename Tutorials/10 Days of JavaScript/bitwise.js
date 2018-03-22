function getMaxLessThanK(n, k) {
  const S = Array.from(new Array(n), (value, index) => index + 1);
  let max = 0;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      const a = S[i], b = S[j];
      if ((a & b) < k) max = Math.max(max, a & b);
    }
  }
  return max;
}
