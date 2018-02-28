#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, y;
  cin >> y;
  
  if (y < 1918) {
    d = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    if (y % 4 == 0) d++;
  } else if (y == 1918) {
    d = 32 + 14 + 31 + 30 + 31 + 30 + 31 + 31;
  } else {
    d = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    if (y % 400 == 0) d++;
    else if (y % 4 == 0 and y % 100 != 0) d++;
  }
  
  printf("%02d.09.%d\n", 256 - d, y);
  return 0;
}
