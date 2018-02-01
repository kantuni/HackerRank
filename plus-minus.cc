#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int pos = 0, neg = 0, zero = 0, total = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > 0) pos++;
    else if (a < 0) neg++;
    else zero++;
    total++;
  }
  printf("%.6f\n", 1.0 * pos / total);
  printf("%.6f\n", 1.0 * neg / total);
  printf("%.6f\n", 1.0 * zero / total);
  return 0;
}
