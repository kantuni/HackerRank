#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, vector<int> candles) {
  sort(candles.rbegin(), candles.rend());
  int count = 1;
  for (int i = 1; i < n; i++) {
    if (candles[i] == candles[0]) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  vector<int> candles(n);
  for (int i = 0; i < n; i++) {
     cin >> candles[i];
  }
  int result = birthdayCakeCandles(n, candles);
  cout << result << "\n";
  return 0;
}
