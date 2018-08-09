#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0, lvl = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'D') {
      if (lvl == 0) {
        cnt++;
      }
      lvl--;
    } else {
      lvl++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
