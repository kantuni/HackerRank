#include <bits/stdc++.h>
using namespace std;

int main() {
  string hh, mm, ss, ampm;
  char h1, h2;
  cin >> h1 >> h2;
  cin.ignore();
  char m1, m2;
  cin >> m1 >> m2;
  cin.ignore();
  char s1, s2;
  cin >> s1 >> s2 >> ampm;
  hh = string(1, h1) + string(1, h2);
  mm = string(1, m1) + string(1, m2);
  ss = string(1, s1) + string(1, s2);
  if (hh == "12") {
    hh = "00";
  }
  if (ampm == "PM") {
    hh = to_string(stoi(hh) + 12);
  }
  cout << hh << ":" << mm << ":" << ss << "\n";
  return 0;
}
