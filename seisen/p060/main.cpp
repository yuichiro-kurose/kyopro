// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int v, e;
  cin >> v >> e;
  vector<vector<int>> dist(v, vector<int>(v, inf));
  for (int i = 0; i < v; i++) {
    dist[i][i] = 0;
  }
  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    dist[s][t] = d;
  }
  for (int k = 0; k < v; k++) {
    for (int i = 0; i < v; i++) {
      for (int j = 0; j < v; j++) {
        if (dist[i][k] != inf && dist[k][j] != inf) {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }
  }
  for (int i = 0; i < v; i++) {
    if (dist[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (j > 0) {
        cout << ' ';
      }
      if (dist[i][j] == inf) {
        cout << "INF";
      } else {
        cout << dist[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}
