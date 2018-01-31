#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

int main() {
  int n;
  cin >> n;
  vvc M(n, vc(n, ' '));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j >= n - 1) {
        M[i][j] = '#';
      }
      cout << M[i][j];
    }
    cout << "\n";
  }
  return 0;
}
