// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<pair<int, int>> p(m);
  rep(i, m) cin >> p[i].first >> p[i].second;
  sort(p.rbegin(), p.rend());
  int ans = 0;
  rep(i, m - 1) if (p[i].first < n) ans += n - p[i].first;
  cout << ans << endl;
  return 0;
}
