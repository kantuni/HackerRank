#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int tmp = a[i] + a[j];
      if (tmp % k == 0) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
