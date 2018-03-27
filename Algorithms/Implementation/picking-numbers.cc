#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), freq(100, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }
  int cnt = 1;
  for (int i = 0; i < n - 1; i++) {
    cnt = max(cnt, freq[i] + freq[i + 1]);
  }
  cout << cnt << "\n";
  return 0;
}
