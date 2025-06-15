// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  int ans = inf;
  for (int u : g[0]) {
    int cnt = 0;
    vector<bool> vis(n, false);
    vis[0] = true;
    auto dfs = [&](auto dfs, int u) -> void {
      vis[u] = true;
      cnt++;
      for (int v : g[u]) {
        if (vis[v]) {
          continue;
        }
        dfs(dfs, v);
      }
    };
    dfs(dfs, u);
    ans = min(ans, n - cnt);
  }
  cout << ans << endl;
  return 0;
}
