#include <bits/stdc++.h>
using namespace std;

int similarity(string s) {
  int ans = s.size();
  for (int i = 1; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      if (s[j] == s[j - i]) {
        ans++;
        continue;
      }
      break;
    }
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    cout << similarity(s) << endl;
  }
  return 0;
}
