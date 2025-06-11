// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int v, e, r;
  cin >> v >> e >> r;
  vector<vector<pair<int, int>>> g(v);
  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    g[s].push_back(make_pair(t, d));
  }
  auto dijkstra = [&]() -> vector<int> {
    vector<int> dist(v, inf);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    dist[r] = 0;
    que.push(make_pair(0, r));
    while (!que.empty()) {
      pair<int, int> p = que.top();
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
  vector<int> dist = dijkstra();
  for (int i = 0; i < v; i++) {
    if (dist[i] == inf) {
      cout << "INF" << endl;
    } else {
      cout << dist[i] << endl;
    }
  }
  return 0;
}
