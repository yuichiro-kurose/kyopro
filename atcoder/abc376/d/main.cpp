// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
  }
  auto bfs = [&]() -> vector<int> {
    vector<int> dist(n, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while (!que.empty()) {
      int u = que.front();
      que.pop();
      for (int v : g[u]) {
        if (dist[v] == -1) {
          dist[v] = dist[u] + 1;
          que.push(v);
        }
      }
    }
    return dist;
  };
  vector<int> dist = bfs();
  int ans = inf;
  for (int i = 0; i < n; i++) {
    if (dist[i] == -1) {
      continue;
    }
    bool f = false;
    for (int v : g[i]) {
      if (v == 0) {
        f = true;
      }
    }
    if (f) {
      ans = min(ans, dist[i] + 1);
    }
  }
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
