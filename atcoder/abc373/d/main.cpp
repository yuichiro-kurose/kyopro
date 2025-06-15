// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u - 1].push_back(make_pair(v - 1, w));
    g[v - 1].push_back(make_pair(u - 1, -w));
  }
  vector<bool> vis(n, false);
  vector<long long> x(n, 0);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (auto [v, w] : g[u]) {
      if (vis[v]) {
        continue;
      }
      x[v] = x[u] + w;
      dfs(dfs, v);
    }
  };
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      dfs(dfs, i);
    }
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << x[i];
  }
  cout << endl;
  return 0;
}
