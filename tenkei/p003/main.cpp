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
  auto bfs = [&](int root) -> vector<int> {
    vector<int> dist(n, -1);
    queue<int> que;
    dist[root] = 0;
    que.push(root);
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
  vector<int> dist = bfs(0);
  int mx = 0, root = 0;
  for (int i = 0; i < n; i++) {
    if (mx < dist[i]) {
      mx = dist[i];
      root = i;
    }
  }
  dist = bfs(root);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, dist[i] + 1);
  }
  cout << ans << endl;
  return 0;
}
