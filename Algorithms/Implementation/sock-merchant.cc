#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<int, int> um;
  int n;
  cin >> n;
  while (n--) {
    int c;
    cin >> c;
    um[c]++;
  }
  int cnt = 0;
  for (auto kv: um) cnt += kv.second / 2;
  cout << cnt << "\n";
  return 0;
}
