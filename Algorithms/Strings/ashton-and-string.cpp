#include <bits/stdc++.h>
using namespace std;

string substrings(string s) {
  set<string> all;
  for (int i = 0; i < s.size(); i++) {
    for (int len = 1; len <= s.size(); len++) {
      all.insert(s.substr(i, len));
    }
  }
  string concat;
  for (auto substr: all) {
    concat += substr;
  }
  return concat;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int k;
    cin >> s >> k;
    string all = substrings(s);
    cout << all[k - 1] << "\n";
  }
  return 0;
}
