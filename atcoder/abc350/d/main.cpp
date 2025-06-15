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
  long long cnt;
  vector<bool> vis(n, false);
  set<pair<int, int>> st;
  auto dfs = [&](auto dfs, int u) -> void {
    vis[u] = true;
    cnt++;
    for (int v : g[u]) {
      st.insert(make_pair(u, v));
      st.insert(make_pair(v, u));
      if (vis[v]) {
        continue;
      }
      dfs(dfs, v);
    }
  };
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      cnt = 0;
      st = set<pair<int, int>>();
      dfs(dfs, i);
      ans += cnt * (cnt - 1) / 2 - st.size() / 2;
    }
  }
  cout << ans << endl;
  return 0;
}
