#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int n;
  cin >> n;
  
  vvi M(n, vi(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> M[i][j];
    }
  }
  
  int ld = 0, rd = 0;
  for (int i = 0; i < n; i++) {
    ld += M[i][i];
    rd += M[i][n - i - 1];
  }
  
  cout << abs(ld - rd) << "\n";
  return 0;
}
