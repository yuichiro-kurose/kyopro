// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> cnt(n, 0);
  for (int i = 0; i < q; i++) {
    int p, x;
    cin >> p >> x;
    cnt[p - 1] += x;
  }
  vector<bool> vis(n, false);
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      cnt[v] += cnt[u];
      dfs(dfs, v);
    }
  };
  dfs(dfs, 0);
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << cnt[i];
  }
  cout << endl;
  return 0;
}
