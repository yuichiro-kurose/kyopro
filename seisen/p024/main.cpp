// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int i = 0; i < k; i++) {
      int v;
      cin >> v;
      g[u - 1].push_back(v - 1);
    }
  }
  vector<int> d(n, -1), f(n);
  int t = 1;
  auto dfs = [&](auto dfs, int u) -> void {
    d[u] = t++;
    for (int v : g[u]) {
      if (d[v] == -1) {
        dfs(dfs, v);
      }
    }
    f[u] = t++;
  };
  for (int i = 0; i < n; i++) {
    if (d[i] == -1) {
      dfs(dfs, i);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
  }
  return 0;
}
