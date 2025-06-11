// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> c(n), r(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i] >> r[i];
  }
  vector<vector<int>> g(n);
  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<vector<int>> d(n, vector<int>(n, inf));
  for (int i = 0; i < n; i++) {
    d[i][i] = 0;
    queue<int> que;
    que.push(i);
    while (!que.empty()) {
      int u = que.front();
      que.pop();
      for (int v : g[u]) {
        if (d[i][v] != inf) {
          continue;
        }
        d[i][v] = d[i][u] + 1;
        que.push(v);
      }
    }
  }
  vector<vector<int>> h(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (d[i][j] <= r[i]) {
        h[i].push_back(j);
      }
    }
  }
  auto dijkstra = [&]() -> vector<int> {
    vector<int> dist(n, inf);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    dist[0] = 0;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
      pair<int, int> p = que.top();
      que.pop();
      int u = p.second;
      if (dist[u] < p.first) {
        continue;
      }
      for (int v : h[u]) {
        if (dist[v] > dist[u] + c[u]) {
          dist[v] = dist[u] + c[u];
          que.push(make_pair(dist[v], v));
        }
      }
    }
    return dist;
  };
  vector<int> dist = dijkstra();
  cout << dist[n - 1] << endl;
  return 0;
}
