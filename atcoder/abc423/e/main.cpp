// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0);
  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i] * i;
    c[i] = a[i] * i * i;
  }
  for (int i = 1; i <= n; i++) {
    a[i] += a[i - 1];
    b[i] += b[i - 1];
    c[i] += c[i - 1];
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    ll t = r - l + 1;
    ll ans = (1 - l) * (r + 1) * (a[r] - a[l - 1]) + (l + r) * (b[r] - b[l - 1]) - (c[r] - c[l - 1]);
    cout << ans << endl;
  }
  return 0;
}
