#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, n, m;
  cin >> s >> n >> m;
  vector<int> k(n), u(m);
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> u[i];
  }
  int max = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int c = k[i] + u[j];
      if (c <= s and c > max) max = c;
    }
  }
  cout << max << "\n";
  return 0;
}
