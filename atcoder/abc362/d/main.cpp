// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < m; i++) {
    int u, v, b;
    cin >> u >> v >> b;
    u--;
    v--;
    g[u].push_back(make_pair(v, b + a[v]));
    g[v].push_back(make_pair(u, b + a[u]));
  }
  auto dijkstra = [&]() -> vector<long long> {
    vector<long long> dist(n, inf);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
    dist[0] = a[0];
    que.push(make_pair(dist[0], 0));
    while (!que.empty()) {
      pair<long long, int> p = que.top();
      que.pop();
      int u = p.second;
      if (dist[u] < p.first) {
        continue;
      }
      for (auto [v, w] : g[u]) {
        if (dist[v] > dist[u] + w) {
          dist[v] = dist[u] + w;
          que.push(make_pair(dist[v], v));
        }
      }
    }
    return dist;
  };
  vector<long long> dist = dijkstra();
  for (int i = 1; i < n; i++) {
    if (i > 1) {
      cout << ' ';
    }
    cout << dist[i];
  }
  cout << endl;
  return 0;
}
