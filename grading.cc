#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> grades) {
  for (int i = 0; i < grades.size(); i++) {
    int next = (grades[i] / 5 + 1) * 5;
    if (next - grades[i] < 3 && grades[i] >= 38) {
      grades[i] = next;
    }
  }
  return grades;
}

int main() {
  int n;
  cin >> n;
  
  vector<int> grades(n);
  for (int i = 0; i < n; i++) {
    cin >> grades[i];
  }
  
  vector<int> result = solve(grades);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << (i != result.size() - 1 ? "\n" : "");
  }
  cout << "\n";
  return 0;
}
