#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> memo;
  int n;
  cin >> n;
  while (n--) {
    int c;
    cin >> c;
    memo[c]++;
  }
  int cnt = 0;
  for (auto m: memo) {
    cnt += m.second / 2;
  }
  cout << cnt << endl;
  return 0;
}
