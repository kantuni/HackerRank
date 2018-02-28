#include <bits/stdc++.h>
using namespace std;

int main() {
  int y;
  cin >> y;
  
  int d = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
  bool leap = false;

  if (y < 1918) {
    leap = (y % 4 == 0);
  } else if (y == 1918) {
    d -= 13;
  } else {
    leap = (y % 400 == 0) or (y % 4 == 0 and y % 100 != 0);
  }
  
  if (leap) d++;
  printf("%02d.09.%d\n", 256 - d, y);
  return 0;
}
