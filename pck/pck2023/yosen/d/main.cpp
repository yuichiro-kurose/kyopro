// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> x(4), y(4);
  for (int i = 0; i < 4; i++) {
    cin >> x[i] >> y[i];
  }
  bool f = true;
  vector<int> d(4);
  for (int i = 0; i < 4; i++) {
    d[i] = (x[i] - x[(i + 1) % 4]) * (x[i] - x[(i + 1) % 4]) + (y[i] - y[(i + 1) % 4]) * (y[i] - y[(i + 1) % 4]);
    if (i > 0 && d[i] != d[0]) {
      f = false;
    }
  }
  int a = (x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2]);
  int b = (x[1] - x[3]) * (x[1] - x[3]) + (y[1] - y[3]) * (y[1] - y[3]);
  if (a != b) {
    f = false;
  }
  if (x[0] == x[2] && y[0] == y[2] || x[1] == x[3] && y[1] == y[3]) {
    f = false;
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
