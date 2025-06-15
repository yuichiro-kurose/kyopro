// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, w;
  cin >> n >> w;
  vector<int> x(n), y(n);
  vector<vector<int>> g(w);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
    g[x[i]].push_back(y[i]);
  }
  vector<int> d(n + 1, 0);
  for (int i = 0; i < w; i++) {
    sort(g[i].begin(), g[i].end());
    for (int j = 0; j < g[i].size(); j++) {
      d[j] = max(d[j], g[i][j]);
    }
    d[g[i].size()] = inf;
  }
  for (int i = 1; i <= n; i++) {
    d[i] = max(d[i], d[i - 1] + 1);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int t, a;
    cin >> t >> a;
    a--;
    int p = lower_bound(g[x[a]].begin(), g[x[a]].end(), y[a]) - g[x[a]].begin();
    if (t <= d[p]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
