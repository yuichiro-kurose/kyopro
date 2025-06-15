// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c;
  cin >> r >> c;
  int sx, sy;
  cin >> sx >> sy;
  sx--;
  sy--;
  int gx, gy;
  cin >> gx >> gy;
  gx--;
  gy--;
  vector<vector<char>> g(r, vector<char>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> g[i][j];
    }
  }
  auto bfs = [&]() -> vector<vector<int>> {
    vector<vector<int>> dist(r, vector<int>(c, -1));
    queue<pair<int, int>> que;
    dist[sx][sy] = 0;
    que.push(make_pair(sx, sy));
    while (!que.empty()) {
      auto p = que.front();
      que.pop();
      int x = p.first, y = p.second;
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
          continue;
        }
        if (g[nx][ny] == '#') {
          continue;
        }
        if (dist[nx][ny] != -1) {
          continue;
        }
        dist[nx][ny] = dist[x][y] + 1;
        que.push(make_pair(nx, ny));
      }
    }
    return dist;
  };
  vector<vector<int>> dist = bfs();
  cout << dist[gx][gy] << endl;
  return 0;
}
