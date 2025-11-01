// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

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
  vector<bool> vis(n, false);
  auto dfs = [&](auto dfs, int u) -> pair<int, int> {
    pair<int, int> res = make_pair(0, u);
    vis[u] = true;
    for (int v : g[u]) {
      if (!vis[v]) {
        auto next = dfs(dfs, v);
        next.first++;
        res = max(res, next);
      }
    }
    return res;
  };
  int s = dfs(dfs, 0).second;
  vis = vector<bool>(n, false);
  auto [d, t] = dfs(dfs, s);
  auto bfs = [&](int start) -> vector<int> {
    vector<int> dist(n, inf);
    queue<int> que;
    dist[start] = 0;
    que.push(start);
    while (!que.empty()) {
      int u = que.front();
      que.pop();
      for (int v : g[u]) {
        if (dist[v] > dist[u] + 1) {
          dist[v] = dist[u] + 1;
          que.push(v);
        }
      }
    }
    return dist;
  };
  auto dist_s = bfs(s), dist_t = bfs(t);
  for (int v = 0; v < n; v++) {
    if (dist_s[v] > dist_t[v]) {
      cout << s + 1 << endl;
    }
    if (dist_s[v] == dist_t[v]) {
      cout << max(s, t) + 1 << endl;
    }
    if (dist_s[v] < dist_t[v]) {
      cout << t + 1 << endl;
    }
  }
  return 0;
}
