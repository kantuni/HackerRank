#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int hmax = 0;
  for (int i = 0; i < n; i++) {
    int h;
    cin >> h;
    hmax = max(hmax, h);
  }
  cout << max(hmax - k, 0) << endl; 
  return 0;
}
