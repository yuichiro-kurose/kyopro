// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  int sx, sy, gx, gy;
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      if (a[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }
  auto dijkstra = [&]() -> int {
    vector<vector<vector<int>>> dist(2, vector<vector<int>>(h, vector<int>(w, inf)));
    priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> que;
    dist[0][sx][sy] = 0;
    que.push(make_tuple(0, 0, sx, sy));
    while (!que.empty()) {
      auto tup = que.top();
      que.pop();
      int f = get<1>(tup), x = get<2>(tup), y = get<3>(tup);
      if (dist[f][x][y] < get<0>(tup)) {
        continue;
      }
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        if (a[nx][ny] == '#') {
          continue;
        }
        int nf;
        if (a[nx][ny] != '?') {
          nf = f;
        } else {
          nf = (f + 1) % 2;
        }
        if (nf == 0 && a[nx][ny] == 'x' || nf == 1 && a[nx][ny] == 'o') {
          continue;
        }
        if (dist[nf][nx][ny] > dist[f][x][y] + 1) {
          dist[nf][nx][ny] = dist[f][x][y] + 1;
          que.push(make_tuple(dist[nf][nx][ny], nf, nx, ny));
        }
      }
    }
    return min(dist[0][gx][gy], dist[1][gx][gy]);
  };
  int ans = dijkstra();
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
