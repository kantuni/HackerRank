#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    sum += c[i];
  }
  int charged;
  cin >> charged;
  double actual = (sum - c[k]) / 2.0;
  if (charged - actual == 0) {
    cout << "Bon Appetit\n";
  } else {
    cout << charged - actual << "\n";
  }
  return 0;
}
