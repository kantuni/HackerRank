#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int mn = s[0], mx = s[0];
  int cmn = 0, cmx = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] < mn) {
      mn = s[i];
      cmn++;
    } else if (s[i] > mx) {
      mx = s[i];
      cmx++;
    }
  }
  cout << cmx << " " << cmn << endl;
  return 0;
}
