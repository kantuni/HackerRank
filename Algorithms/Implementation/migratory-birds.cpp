#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(int n, vector<int>& t) {
  vector<int> cnt(5, 0);
  for (int i = 0; i < n; i++) {
    cnt[t[i] - 1]++;
  }
  int mx = -1, type = -1;
  for (int i = 0; i < 5; i++) {
    if (cnt[i] > mx) {
      mx = cnt[i];
      type = i + 1;
    }
  }
  return type;
}

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  cout << migratoryBirds(n, t) << endl;
  return 0;
}
