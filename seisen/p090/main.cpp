// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> x(n + m), y(n + m), r(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> r[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> x[n + i] >> y[n + i];
  }
  double ans = inf;
  for (int i = 0; i < n + m - 1; i++) {
    for (int j = i + 1; j < n + m; j++) {
      double dist = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
      if (j < n) {
        ans = min({ans, (double) r[i], (double) r[j]});
      } else if (i < n) {
        ans = min(ans, dist - r[i]);
      } else {
        ans = min(ans, dist / 2);
      }
    }
  }
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}
