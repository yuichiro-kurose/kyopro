// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, q;
  cin >> n >> m >> q;
  vector<long long> p(n + 1, 0);
  vector<vector<long long>> idx(m), val(m);
  for (int i = 0; i < m; i++) {
    idx[i].push_back(-1);
    val[i].push_back(0);
  }
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> p[i] >> a;
    a--;
    idx[a].push_back(i);
    val[a].push_back(p[i] + val[a].back());
    p[i] += p[i - 1];
  }
  while (q--) {
    int t, l, r;
    cin >> t >> l >> r;
    t--;
    long long ans = p[r] - p[l - 1];
    int l2 = lower_bound(idx[t].begin(), idx[t].end(), l) - idx[t].begin();
    int r2 = upper_bound(idx[t].begin(), idx[t].end(), r) - idx[t].begin() - 1;
    long long x = (val[t][r2] - val[t][l2 - 1]) / 2;
    ans -= x;
    cout << ans << endl;
  }
  return 0;
}
