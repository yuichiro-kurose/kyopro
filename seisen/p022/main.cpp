// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long double p;
  cin >> p;
  long double l = 0, r = 1e18;
  auto f = [&](long double x) {
    return x + p / pow(2, x / 1.5);
  };
  for (int i = 0; i < 200; i++) {
    long double m1 = (2 * l + r) / 3;
    long double m2 = (l + 2 * r) / 3;
    if (f(m1) < f(m2)) {
      r = m2;
    } else {
      l = m1;
    }
  }
  cout << fixed << setprecision(9) << f(l) << endl;
  return 0;
}
