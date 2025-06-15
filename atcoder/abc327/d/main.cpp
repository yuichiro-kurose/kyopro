// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    a[i]--;
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    b[i]--;
  }
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  bool f = true;
  vector<int> color(n, 0);
  auto dfs = [&](auto dfs, int u, int c) -> void {
    color[u] = c;
    for (int v : g[u]) {
      if (color[v] == c) {
        f = false;
      }
      if (color[v] == 0) {
        dfs(dfs, v, -c);
      }
    }
  };
  for (int i = 0; i < n; i++) {
    if (color[i] == 0) {
      dfs(dfs, i, 1);
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
