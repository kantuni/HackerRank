#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p;
  cin >> n >> p;
  int ff = p / 2;
  int fb = n / 2 - ff;
  cout << min(ff, fb) << endl;
  return 0;
}
