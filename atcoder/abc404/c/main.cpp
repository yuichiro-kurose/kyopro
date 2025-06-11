// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<bool> vis(n, false);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v);
    }
  };
  dfs(dfs, 0);
  for (int i = 0; i < n; i++) {
    if (g[i].size() != 2 || !vis[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
