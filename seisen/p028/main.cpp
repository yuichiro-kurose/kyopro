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
  vector<int> d = bfs();
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ' ' << d[i] << endl;
  }
  return 0;
}
