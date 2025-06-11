// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<char>> s(h, vector<char>(w));
  int sx, sy;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
      if (s[i][j] == 'S') {
        sx = i;
        sy = j;
      }
    }
  }
  int ans = 0;
  for (int a = 1; a <= n; a++) {
    auto bfs = [&]() -> void {
      vector<vector<int>> dist(h, vector<int>(w, -1));
      queue<pair<int, int>> que;
      dist[sx][sy] = 0;
      que.push(make_pair(sx, sy));
      while (!que.empty()) {
        auto p = que.front();
        que.pop();
        int x = p.first, y = p.second;
        for (int d = 0; d < 4; d++) {
          int nx = x + dx[d], ny = y + dy[d];
          if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
            continue;
          }
          if (s[nx][ny] == 'X') {
            continue;
          }
          if (dist[nx][ny] != -1) {
            continue;
          }
          dist[nx][ny] = dist[x][y] + 1;
          que.push(make_pair(nx, ny));
          if (s[nx][ny] == a + '0') {
            ans += dist[nx][ny];
            sx = nx;
            sy = ny;
          }
        }
      }
    };
    bfs();
  }
  cout << ans << endl;
  return 0;
}
