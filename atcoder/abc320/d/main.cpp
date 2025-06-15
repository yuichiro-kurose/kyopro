// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, pair<int, int>>>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    g[a - 1].push_back(make_pair(b - 1, make_pair(x, y)));
    g[b - 1].push_back(make_pair(a - 1, make_pair(-x, -y)));
  }
  vector<bool> vis(n, false);
  vector<pair<long long, long long>> ans(n);
  ans[0] = make_pair(0, 0);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (auto p : g[u]) {
      int v = p.first;
      if (vis[v]) {
        continue;
      }
      int x = p.second.first, y = p.second.second;
      ans[v] = make_pair(ans[u].first + x, ans[u].second + y);
      dfs(dfs, v);
    }
  };
  dfs(dfs, 0);
  for (int i = 0; i < n; i++) {
    if (vis[i]) {
      cout << ans[i].first << ' ' << ans[i].second << endl;
    } else {
      cout << "undecidable" << endl;
    }
  }
  return 0;
}
