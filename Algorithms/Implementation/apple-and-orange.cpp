#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
  int capples = count_if(apples.begin(), apples.end(), [s, t, a] (int d) {
    return a + d >= s and a + d <= t;
  });
  int coranges = count_if(oranges.begin(), oranges.end(), [s, t, b] (int d) { 
    return b + d >= s and b + d <= t;
  });
  cout << capples << "\n" << coranges << "\n";
}

int main() {
  int s, t, a, b, m, n;
  cin >> s >> t >> a >> b >> m >> n;
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
