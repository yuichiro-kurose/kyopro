// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 998244353;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<ll> a(n + 1, 0), b(m + 1, 0);
  vector<ll> sa(n + 1, 0), sb(m + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 1; i <= n; i++) {
    sa[i] = sa[i - 1] + a[i];
  }
  for (int i = 1; i <= m; i++) {
    sb[i] = sb[i - 1] + b[i];
  }
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    int idx = upper_bound(b.begin(), b.end(), a[i]) - b.begin() - 1;
    ans = (ans + a[i] * (2 * idx - m) - 2 * sb[idx] + sb[m]) % MOD;
  }
  cout << ans << endl;
  return 0;
}
