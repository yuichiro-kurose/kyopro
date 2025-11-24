// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> k(n + 1), sk(n + 1, 0);
  vector<vector<int>> x(n + 1), d(n + 1);
  int stone = 0;
  for (int i = 1; i <= n; i++) {
    cin >> k[i];
    x[i].resize(k[i] + 1);
    d[i].resize(k[i] + 1);
    for (int j = 1; j <= k[i]; j++) {
      cin >> x[i][j] >> d[i][j];
    }
    sk[i] = sk[i - 1] + k[i];
    stone += k[i];
  }
  vector<vector<tuple<int, int, int>>> g(stone + 2);
  for (int j = 1; j <= k[1]; j++) {
    g[0].push_back(make_tuple(j, 0, 0));
  }
  for (int j = 1; j <= k[2]; j++) {
    g[0].push_back(make_tuple(sk[1] + j, 0, 1));
  }
  for (int i = 1; i <= n - 1; i++) {
    for (int j0 = 1; j0 <= k[i]; j0++) {
      for (int j1 = 1; j1 <= k[i + 1]; j1++) {
        int u = sk[i - 1] + j0, v = sk[i] + j1;
        int cost = (d[i][j0] + d[i + 1][j1]) * abs(x[i][j0] - x[i + 1][j1]);
        g[u].push_back(make_tuple(v, cost, 0));
      }
      if (i <= n - 2) {
        for (int j1 = 1; j1 <= k[i + 2]; j1++) {
          int u = sk[i - 1] + j0, v = sk[i + 1] + j1;
          int cost = (d[i][j0] + d[i + 2][j1]) * abs(x[i][j0] - x[i + 2][j1]);
          g[u].push_back(make_tuple(v, cost, 1));
        }
      }
    }
  }
  for (int j = 1; j <= k[n]; j++) {
    g[sk[n - 1] + j].push_back(make_tuple(stone + 1, 0, 0));
  }
  for (int j = 1; j <= k[n - 1]; j++) {
    g[sk[n - 2] + j].push_back(make_tuple(stone + 1, 0, 1));
  }
  vector<vector<ll>> dist(m + 1, vector<ll>(stone + 2, INF));
  priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> que;
  dist[0][0] = 0;
  que.push(make_tuple(0, 0, 0));
  while (!que.empty()) {
    auto [now, cnt, u] = que.top();
    que.pop();
    if (dist[cnt][u] < now) {
      continue;
    }
    for (auto [v, cost, skip] : g[u]) {
      if (cnt + skip <= m && dist[cnt + skip][v] > dist[cnt][u] + cost) {
        dist[cnt + skip][v] = dist[cnt][u] + cost;
        que.push(make_tuple(dist[cnt + skip][v], cnt + skip, v));
      }
    }
  }
  ll ans = INF;
  for (int i = 0; i <= m; i++) {
    ans = min(ans, dist[i][stone + 1]);
  }
  cout << ans << endl;
  return 0;
}
