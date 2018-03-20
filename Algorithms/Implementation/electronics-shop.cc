#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, n, m;
  cin >> s >> n >> m;
  vector<int> k(n), u(m);
  for (int i = 0; i < n; i++) cin >> k[i];
  for (int i = 0; i < m; i++) cin >> u[i];
  int max = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int cnt = k[i] + u[j];
      if (cnt <= s and cnt > max) max = cnt;
    }
  }
  cout << max << "\n";
  return 0;
}
