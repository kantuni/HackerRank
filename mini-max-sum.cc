#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> numbers(5);
  for (int i = 0; i < 5; i++) {
    cin >> numbers[i];
  }
  
  sort(numbers.begin(), numbers.end());
  
  long long min = 0, max = 0;
  for (int i = 0; i < 4; i++) {
    min += numbers[i];
  }
  for (int i = 1; i < 5; i++) {
    max += numbers[i];
  }
  
  cout << min << " " << max << "\n";
  return 0;
}
