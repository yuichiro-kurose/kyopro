// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<vector<bool>> edge(n, vector<bool>(n, false));
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
    edge[a - 1][b - 1] = true;
  }
  vector<bool> vis(n, false);
  vector<int> topo;
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v);
    }
    topo.push_back(u);
  };
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      dfs(dfs, i);
    }
  }
  reverse(topo.begin(), topo.end());
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if (!edge[topo[i]][topo[i + 1]]) {
      ans = 1;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << topo[i] + 1 << endl;
  }
  cout << ans << endl;
  return 0;
}
