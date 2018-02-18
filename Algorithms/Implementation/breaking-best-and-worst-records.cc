#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  
  int min = s[0], max = s[0];
  int cmin = 0, cmax = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] < min) {
      min = s[i];
      cmin++;
    } else if (s[i] > max) {
      max = s[i];
      cmax++;
    }
  }
  
  cout << cmax << " " << cmin << "\n";
  return 0;
}
