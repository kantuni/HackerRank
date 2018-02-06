#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
  int capples = 0, coranges = 0;
  for (auto d: apples) {
    if (a + d >= s and a + d <= t) {
      capples++;
    }
  }
  for (auto d: oranges) {
    if (b + d >= s and b + d <= t) {
      coranges++;
    }
  }
  cout << capples << "\n";
  cout << coranges << "\n";
}

int main() {
  int s, t;
  cin >> s >> t;
  int a, b;
  cin >> a >> b;
  int m, n;
  cin >> m >> n;
  vector<int> apples(m);
  for (int i = 0; i < m; i++) {
    cin >> apples[i];
  }
  vector<int> oranges(n);
  for (int i = 0; i < n; i++) {
    cin >> oranges[i];
  }
  countApplesAndOranges(s, t, a, b, apples, oranges);
  return 0;
}
