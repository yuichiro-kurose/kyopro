// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < n - 1; i++) {
    int a, b, x;
    cin >> a >> b >> x;
    g[i].push_back(make_pair(i + 1, a));
    g[i].push_back(make_pair(x - 1, b));
  }
  auto dijkstra = [&]() -> vector<long long> {
    vector<long long> dist(n, inf);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que;
    dist[0] = 0;
    que.push(make_pair(0, 0));
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
  vector<long long> dist = dijkstra();
  cout << dist[n - 1] << endl;
  return 0;
}
