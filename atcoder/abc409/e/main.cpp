// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].push_back(make_pair(v, w));
    g[v].push_back(make_pair(u, w));
  }
  long long ans = 0;
  vector<bool> vis(n, false);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (auto [v, w] : g[u]) {
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v);
      ans += (long long) abs(x[v]) * w;
      x[u] += x[v];
    }
  };
  dfs(dfs, 0);
  cout << ans << endl;
  return 0;
}
