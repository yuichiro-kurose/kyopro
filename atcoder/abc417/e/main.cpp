// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    x--;
    y--;
    vector<vector<bool>> g(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      g[u][v] = true;
      g[v][u] = true;
    }
    vector<bool> vis;
    vector<int> path, ans;
    path.push_back(x);
    auto dfs = [&](auto dfs, int u) -> void {
      vis[u] = true;
      path.push_back(u);
      if (u == y) {
        if (ans.empty()) {
          ans = path;
        }
        return;
      }
      for (int v = 0; v < n; v++) {
        if (!g[u][v]) {
          continue;
        }
        if (vis[v]) {
          continue;
        }
        dfs(dfs, v);
      }
      path.pop_back();
    };
    for (int i = 0; i < n; i++) {
      if (!g[x][i]) {
        continue;
      }
      vis = vector<bool>(n, false);
      vis[x] = true;
      dfs(dfs, i);
      if (!ans.empty()) {
        break;
      }
    }
    for (int i = 0; i < ans.size(); i++) {
      if (i > 0) {
        cout << ' ';
      }
      cout << ans[i] + 1;
    }
    cout << endl;
  }
  return 0;
}
