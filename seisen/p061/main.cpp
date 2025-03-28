// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> dist(n, vector<int>(n, inf));
  for (int i = 0; i < n; i++) {
    dist[i][i] = 0;
  }
  for (int i = 0; i < m; i++) {
    int a, b, t;
    cin >> a >> b >> t;
    a--;
    b--;
    dist[a][b] = t;
    dist[b][a] = t;
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (dist[i][k] != inf && dist[k][j] != inf) {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }
  }
  int ans = inf;
  for (int i = 0; i < n; i++) {
    int now = 0;
    for (int j = 0; j < n; j++) {
      now = max(now, dist[i][j]);
    }
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}
