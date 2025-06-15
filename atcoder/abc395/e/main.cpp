// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, x;
  cin >> n >> m >> x;
  vector<vector<vector<int>>> g(2, vector<vector<int>>(n));
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[0][u].push_back(v);
    g[1][v].push_back(u);
  }
  vector<vector<long long>> dist(2, vector<long long>(n, inf));
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> que;
  dist[0][0] = 0;
  que.push(make_tuple(dist[0][0], 0, 0));
  while (!que.empty()) {
    tuple<int, int, int> tup = que.top();
    que.pop();
    int f = get<1>(tup), u = get<2>(tup);
    for (int v : g[f][u]) {
      if (dist[f][v] <= dist[f][u] + 1) {
        continue;
      }
      dist[f][v] = dist[f][u] + 1;
      que.push(make_tuple(dist[f][v], f, v));
    }
    if (dist[abs(f - 1)][u] <= dist[f][u] + x) {
      continue;
    }
    int f2 = abs(f - 1);
    dist[f2][u] = dist[f][u] + x;
    que.push(make_tuple(dist[f2][u], f2, u));
  }
  cout << min(dist[0][n - 1], dist[1][n - 1]) << endl;
  return 0;
}
