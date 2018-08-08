#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  int hmax = 0;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
    hmax = max(hmax, h[i]);
  }
  cout << max(hmax - k, 0) << "\n"; 
  return 0;
}
