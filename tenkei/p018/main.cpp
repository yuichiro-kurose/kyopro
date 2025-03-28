// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const double pi = 3.141592653589793;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  double l, x, y;
  cin >> l >> x >> y;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    double e;
    cin >> e;
    double d = e / t * 2 * pi;
    double py = -l / 2 * sin(d);
    double pz = l / 2 - l / 2 * cos(d);
    double ans = atan2(pz, sqrt(x * x + (y - py) * (y - py))) * 180 / pi;
    cout << fixed << setprecision(9) << ans << endl;
  }
  return 0;
}
