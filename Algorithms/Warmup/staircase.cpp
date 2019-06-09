#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char> > M(n, vector<char>(n, ' '));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j >= n - 1) {
        M[i][j] = '#';
      }
      cout << M[i][j];
    }
    cout << endl;
  }
  return 0;
}
