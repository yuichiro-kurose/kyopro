// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<vector<pair<int, int>>> dist(n, vector<pair<int, int>>(n, make_pair(inf, inf)));
  for (int i = 0; i < n; i++) {
    dist[i][i] = make_pair(0, 0);
  }
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
    dist[u][v].first = 0;
    dist[v][u].first = 0;
    dist[u][v].second = 1;
    dist[v][u].second = 1;
  }
  int k;
  cin >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
    a[i]--;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int b;
    cin >> b;
    b--;
    for (int v : g[b]) {
      dist[v][b].first = 1;
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (dist[i][j].first > dist[i][k].first + dist[k][j].first) {
          dist[i][j].first = dist[i][k].first + dist[k][j].first;
          dist[i][j].second = dist[i][k].second + dist[k][j].second;
        } else if (dist[i][j].first == dist[i][k].first + dist[k][j].first) {
          dist[i][j].second = min(dist[i][j].second, dist[i][k].second + dist[k][j].second);
        }
      }
    }
  }
  int ans = 0;
  int now = 0;
  for (int i = 0; i < k; i++) {
    ans += dist[now][a[i]].second;
    now = a[i];
  }
  cout << ans << endl;
  return 0;
}
