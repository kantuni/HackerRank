#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int> > M(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> M[i][j];
    }
  }
  int ld = 0, rd = 0;
  for (int i = 0; i < n; i++) {
    ld += M[i][i];
    rd += M[i][n - 1 - i];
  }
  cout << abs(ld - rd) << endl;
  return 0;
}
