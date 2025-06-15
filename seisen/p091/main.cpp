// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  double a, b, x;
  cin >> a >> b >> x;
  double h = x / (a * a), ans;
  if (x > a * a * b / 2) {
    ans = atan2(2 * (b - h), a) * (180 / M_PI);
  } else {
    ans = atan2(b, 2 * a * h / b) * (180 / M_PI);
  }
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}
