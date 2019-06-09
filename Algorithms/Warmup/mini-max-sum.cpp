#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums(5);
  for (int i = 0; i < 5; i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end());
  long long mn = 0, mx = 0;
  for (int i = 0; i < 4; i++) {
    mn += nums[i];
  }
  for (int i = 1; i < 5; i++) {
    mx += nums[i];
  }
  cout << mn << " " << mx << endl;
  return 0;
}
