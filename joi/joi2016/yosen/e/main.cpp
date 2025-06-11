// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k, s;
  cin >> n >> m >> k >> s;
  int p, q;
  cin >> p >> q;
  vector<int> danger(n, -1);
  queue<int> que;
  for (int i = 0; i < k; i++) {
    int c;
    cin >> c;
    c--;
    danger[c] = 0;
    que.push(c);
  }
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (danger[v] != -1) {
        continue;
      }
      danger[v] = danger[u] + 1;
      que.push(v);
    }
  }
  auto dijkstra = [&]() -> vector<long long> {
    vector<long long> dist(n, inf);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
    dist[0] = 0;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
      int u = que.top().second;
      que.pop();
      for (int v : g[u]) {
        if (danger[u] == 0) {
          continue;
        }
        int w;
        if (u == 0) {
          w = 0;
        } else if (danger[u] > s) {
          w = p;
        } else {
          w = q;
        }
        if (dist[v] > dist[u] + w) {
          dist[v] = dist[u] + w;
          que.push(make_pair(dist[v], v));
        }
      }
    }
    return dist;
  };
  vector<long long> dist = dijkstra();
  if (dist[n - 1] == inf) {
    cout << -1 << endl;
  } else {
    cout << dist[n - 1] << endl;
  }
  return 0;
}
