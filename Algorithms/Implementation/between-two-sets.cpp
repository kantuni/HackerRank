#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  vector<int> B(m);
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }
  int cnt = 0;
  for (int i = 1; i <= 100; i++) {
    bool ok = true;
    for (int j = 0; j < n; j++) {
      if (i % A[j] != 0) {
        ok = false;
        break;
      }
    }
    for (int j = 0; j < m; j++) {
      if (B[j] % i != 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
