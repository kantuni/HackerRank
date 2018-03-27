#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  int cnt = 1, maxcnt = 1;
  bool more = true;
  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] == a[i]) cnt++;
    else if (more and a[i + 1] - a[i] == 1) {
      more = false;
      cnt++;
    }
    else {
      more = true;
      cnt = 1;
    }
    maxcnt = max(cnt, maxcnt);
  }
  cout << maxcnt << "\n";
  return 0;
}
