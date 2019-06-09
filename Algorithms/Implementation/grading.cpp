#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& grades) {
  for (int i = 0; i < grades.size(); i++) {
    int nxt = (grades[i] / 5 + 1) * 5;
    if (nxt - grades[i] < 3 and grades[i] >= 38) {
      grades[i] = nxt;
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
  cout << endl;
  return 0;
}
