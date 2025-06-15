// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<bool> f(n, false);
  for (int i = 0; i < k; i++) {
    int v;
    cin >> v;
    f[v - 1] = true;
  }
  auto dfs = [&](auto dfs, int u, int per = -1) -> void {
    for (int v : g[u]) {
      if (v == per) {
        continue;
      }
      dfs(dfs, v, u);
      f[u] = f[u] || f[v];
    }
  };
  for (int i = 0; i < n; i++) {
    if (f[i]) {
      dfs(dfs, i);
      break;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (f[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
