// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> x(3), y(3);
  for (int i = 0; i < 3; i++) {
    cin >> x[i] >> y[i];
  }
  auto f = [&](int a, int b) -> int {
    return (x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]);
  };
  int a = f(0, 1), b = f(1, 2), c = f(2, 0);
  if (a + b == c || b + c == a || c + a == b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
