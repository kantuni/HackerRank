function getSecondLargest(nums) {
  nums = [...new Set(nums)];
  nums.sort((a, b) => a < b);
  return nums[1];
}
