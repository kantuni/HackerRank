#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), f(100, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    f[a[i]]++;
  }
  int cnt = 1;
  for (int i = 0; i < n - 1; i++) { 
    cnt = max(cnt, f[i] + f[i + 1]);
  }
  cout << cnt << endl;
  return 0;
}
