#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(int n, vector<int> array) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int n;
  cin >> n;

  vector<int> array(n);
  for (int i = 0; i < n; i++) {
     cin >> array[i];
  }
  
  int result = simpleArraySum(n, array);
  cout << result << "\n";
  return 0;
}
