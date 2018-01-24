#include <iostream>
using namespace std;

int solveMeFirst(int x, int y) {
  return x + y;
}

int main() {
  int x, y;
  cin >> x >> y;
  cout << solveMeFirst(x, y);
  return 0;
}
