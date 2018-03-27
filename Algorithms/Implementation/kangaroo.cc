#include <bits/stdc++.h>
using namespace std;

void kangaroo(int x1, int v1, int x2, int v2) {
  if (v1 == v2) cout << (x1 == x2 ? "YES\n" : "NO\n");
  else {
    double t = 1.0 * (x2 - x1) / (v1 - v2);
    cout << (t >= 0 and round(t) == t ? "YES\n" : "NO\n");
  }
}

int main() {
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  kangaroo(x1, v1, x2, v2);
  return 0;
}
