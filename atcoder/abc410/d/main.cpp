// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<tuple<int, int, int>> edges(m);
  for (int i = 0; i < m; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    edges[i] = make_tuple(a - 1, b - 1, w);
  }
  vector<int> dist(n, inf);
  dist[0] = 0;
  while (true) {
    bool f = false;
    for (int i = 0; i < m; i++) {
      tuple<int, int, int> e = edges[i];
      if (dist[get<0>(e)] != inf && dist[get<1>(e)] > (dist[get<0>(e)] ^ get<2>(e))) {
        dist[get<1>(e)] = (dist[get<0>(e)] ^ get<2>(e));
        f = true;
      }
    }
    if (!f) {
      break;
    }
  }
  if (dist[n - 1] == inf) {
    cout << -1 << endl;
  } else {
    cout << dist[n - 1] << endl;
  }
  return 0;
}
