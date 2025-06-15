// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

double f(double x) {
  return x * x * x + x;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  double l = 0, r = 100;
  while (r - l > 0.001) {
    double m = (l + r) / 2;
    if (f(m) < n) {
      l = m;
    } else {
      r = m;
    }
  }
  cout << l << endl;
  return 0;
}
