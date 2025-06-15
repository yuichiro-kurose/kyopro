// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n + 1);
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a == -1) {
      a = 0;
    }
    g[a].push_back(i);
  }
  vector<bool> vis(n, false);
  vector<int> ans;
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      ans.push_back(v);
      dfs(dfs, v);
    }
  };
  dfs(dfs, 0);
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
