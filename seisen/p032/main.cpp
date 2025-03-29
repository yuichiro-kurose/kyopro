// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int w, h;
    cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    set<pair<pair<int, int>, pair<int, int>>> wall;
    for (int i = 0; i < 2 * h - 1; i++) {
      if (i & 1) {
        for (int j = 0; j < w; j++) {
          int a;
          cin >> a;
          if (a == 1) {
            wall.insert(make_pair(make_pair(i / 2, j), make_pair(i / 2 + 1, j)));
            wall.insert(make_pair(make_pair(i / 2 + 1, j), make_pair(i / 2, j)));
          }
        }
      } else {
        for (int j = 0; j < w - 1; j++) {
          int a;
          cin >> a;
          if (a == 1) {
            wall.insert(make_pair(make_pair(i / 2, j), make_pair(i / 2, j + 1)));
            wall.insert(make_pair(make_pair(i / 2, j + 1), make_pair(i / 2, j)));
          }
        }
      }
    }
    auto bfs = [&]() -> vector<vector<int>> {
      vector<vector<int>> dist(h, vector<int>(w, 0));
      queue<pair<int, int>> que;
      dist[0][0] = 1;
      que.push(make_pair(0, 0));
      while (!que.empty()) {
        auto p = que.front();
        que.pop();
        int x = p.first, y = p.second;
        for (int d = 0; d < 4; d++) {
          int nx = x + dx[d], ny = y + dy[d];
          if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
            continue;
          }
          if (wall.count(make_pair(make_pair(x, y), make_pair(nx, ny)))) {
            continue;
          }
          if (dist[nx][ny] != 0) {
            continue;
          }
          dist[nx][ny] = dist[x][y] + 1;
          que.push(make_pair(nx, ny));
        }
      }
      return dist;
    };
    vector<vector<int>> dist = bfs();
    cout << dist[h - 1][w - 1] << endl;
  }
  return 0;
}
