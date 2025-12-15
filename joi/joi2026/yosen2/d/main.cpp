// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<ll> a(n + 1, 0), sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 1; i <= n; i++) {
    sum[i] = sum[i - 1] + a[i];
  }
  vector<ll> c(q + 1), d(q + 1);
  for (int i = 1; i <= q; i++) {
    cin >> c[i] >> d[i];
  }
  for (int j = 1; j <= q; j++) {
    auto f = [&](ll k) -> ll {
      int idx = upper_bound(a.begin(), a.end(), d[j] * k) - a.begin();
      ll len = n - idx + 1;
      ll res = c[j] * k + (sum[n] - sum[idx - 1]) - (d[j] * k * len);
      return res;
    };
    ll l = 0, r = 1000000001;
    while (r - l > 2) {
      ll c1 = (l + l + r) / 3;
      ll c2 = (l + r + r) / 3;
      if (f(c1) < f(c2)) {
        r = c2;
      } else {
        l = c1;
      }
    }
    cout << min(f(l), f(l + 1)) << endl;
    // cout << "f(1) = " << f(1) << endl;
  }
  return 0;
}
