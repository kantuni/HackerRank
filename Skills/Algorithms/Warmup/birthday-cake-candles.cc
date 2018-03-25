#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, vector<int> candles) {
  sort(candles.rbegin(), candles.rend());
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    if (candles[i] == candles[0]) cnt++;
  }
  return cnt;
}

int main() {
  int n;
  cin >> n;
  vector<int> candles(n);
  for (int i = 0; i < n; i++) cin >> candles[i];
  cout << birthdayCakeCandles(n, candles) << "\n";
  return 0;
}
