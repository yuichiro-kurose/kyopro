// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < k; i++) {
    int type;
    cin >> type;
    if (type == 0) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      auto dijkstra = [&]() -> vector<int> {
        vector<int> dist(n, inf);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
        dist[a] = 0;
        que.push(make_pair(0, a));
        while (!que.empty()) {
          int u = que.top().second;
          que.pop();
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
      if (dist[b] == inf) {
        cout << -1 << endl;
      } else {
        cout << dist[b] << endl;
      }
    }
    if (type == 1) {
      int c, d, e;
      cin >> c >> d >> e;
      c--;
      d--;
      g[c].push_back(make_pair(d, e));
      g[d].push_back(make_pair(c, e));
    }
  }
  return 0;
}
