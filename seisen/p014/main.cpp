// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

const ll inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = inf;
  rep(i, 1 << n) {
    if (__builtin_popcount(i) != k) continue;
    int mx = 0;
    ll cost = 0;
    rep(j, n) {
      if (((i >> j) & 1) && mx >= a[j]) {
        cost += mx + 1 - a[j];
        mx++;
      }
      mx = max(mx, a[j]);
    }
    ans = min(ans, cost);
  }
  cout << ans << endl;
  return 0;
}
