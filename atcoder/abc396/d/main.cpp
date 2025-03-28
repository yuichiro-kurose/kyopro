// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, long long>>> g(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].push_back(make_pair(v, w));
    g[v].push_back(make_pair(u, w));
  }
  vector<bool> vis(n, false);
  long long ans = inf;
  auto dfs = [&](auto dfs, int u, long long now) -> void {
    vis[u] = true;
    if (u == n - 1) {
      ans = min(ans, now);
    }
    for (auto p : g[u]) {
      int v = p.first;
      long long w = p.second;
      if (!vis[v]) {
        dfs(dfs, v, now ^ w);
      }
    }
    vis[u] = false;
  };
  dfs(dfs, 0, 0);
  cout << ans << endl;
  return 0;
}
