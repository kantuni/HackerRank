function modifyArray(nums) {
  return nums.map(num => {
    if (num % 2) return num * 3;
    return num * 2;
  });
}
