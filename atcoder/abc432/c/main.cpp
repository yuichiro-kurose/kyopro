// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, x, y;
  cin >> n >> x >> y;
  vector<ll> a(n), b(n);
  ll z = y - x;
  ll min_sum = INF, max_b = 0;
  set<int> r;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i] * x;
    min_sum = min(min_sum, z * a[i] + b[i]);
    max_b = max(max_b, b[i]);
    r.insert(b[i] % z);
  }
  if (r.size() != 1 || min_sum < max_b) {
    cout << -1 << endl;
    return 0;
  }
  // cout << min_sum << ' ' << max_b << endl;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (min_sum - a[i] * x) / z;
  }
  cout << ans << endl;
  return 0;
}
