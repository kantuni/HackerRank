#include <iostream>
using namespace std;

int main() {
  int a0, a1, a2;
  cin >> a0 >> a1 >> a2;
  int b0, b1, b2;
  cin >> b0 >> b1 >> b2;
  int a = 0, b = 0;
  if (a0 > b0) a += 1;
  else if (a0 < b0) b += 1;
  if (a1 > b1) a += 1;
  else if (a1 < b1) b += 1;
  if (a2 > b2) a += 1;
  else if (a2 < b2) b += 1;
  cout << a << " " << b << "\n";
  return 0;
}
