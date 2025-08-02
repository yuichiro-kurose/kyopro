// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<bool> vis(n, false), color(n, false);
  auto dfs = [&](auto dfs, int u, bool c) -> void {
    vis[u] = true;
    color[u] = c;
    for (int v : g[u]) {
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v, !c);
    }
  };
  dfs(dfs, 0, 0);
  int cnt_0 = 0, cnt_1 = 0;
  for (int i = 0; i < n; i++) {
    if (color[i]) {
      cnt_1++;
    } else {
      cnt_0++;
    }
  }
  bool c;
  if (cnt_0 > cnt_1) {
    c = false;
  } else {
    c = true;
  }
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (color[i] == c) {
      ans.push_back(i + 1);
    }
  }
  for (int i = 0; i < n / 2; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
