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
    int x, y;
    cin >> x >> y;
    g[x - 1].push_back(y - 1);
  }
  vector<int> a;
  vector<bool> vis(n, false);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v);
    }
    a.push_back(u);
  };
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      dfs(dfs, i);
    }
  }
  reverse(a.begin(), a.end());
  vector<int> dp(n, 0);
  for (int u : a) {
    for (int v : g[u]) {
      dp[v] = max(dp[v], dp[u] + 1);
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;
  return 0;
}
