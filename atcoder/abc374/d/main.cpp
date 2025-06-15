// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s, t;
  cin >> n >> s >> t;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  double ans = inf;
  do {
    for (int bit = 0; bit < 1 << n; bit++) {
      double now = 0;
      int x = 0, y = 0;
      for (int i = 0; i < n; i++) {
        if ((bit >> i) & 1) {
          now += sqrt((x - a[p[i]]) * (x - a[p[i]]) + (y - b[p[i]]) * (y - b[p[i]])) / s;
          x = c[p[i]];
          y = d[p[i]];
        } else {
          now += sqrt((x - c[p[i]]) * (x - c[p[i]]) + (y - d[p[i]]) * (y - d[p[i]])) / s;
          x = a[p[i]];
          y = b[p[i]];
        }
        now += sqrt((a[p[i]] - c[p[i]]) * (a[p[i]] - c[p[i]]) + (b[p[i]] - d[p[i]]) * (b[p[i]] - d[p[i]])) / t;
      }
      ans = min(ans, now);
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}
