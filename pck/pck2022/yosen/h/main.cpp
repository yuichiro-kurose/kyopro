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
  vector<vector<char>> s(h, vector<char>(w));
  int sx, sy, gx, gy;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
      if (s[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      if (s[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }
  vector<vector<vector<int>>> dist(2, vector<vector<int>>(h, vector<int>(w, inf)));
  queue<tuple<int, int, int>> que;
  dist[0][sx][sy] = 0;
  que.push(make_tuple(0, sx, sy));
  while (!que.empty()) {
    auto [f, x, y] = que.front();
    que.pop();
    int nf = f;
    if (s[x][y] == 'U' || s[x][y] == 'D' || s[x][y] == 'L' || s[x][y] == 'R') {
      int nx = x, ny = y;
      if (s[x][y] == 'U') {
        nx--;
      }
      if (s[x][y] == 'D') {
        nx++;
      }
      if (s[x][y] == 'L') {
        ny--;
      }
      if (s[x][y] == 'R') {
        ny++;
      }
      if (nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] != '#' && dist[nf][nx][ny] == inf) {
        dist[nf][nx][ny] = dist[f][x][y] + 1;
        que.push(make_tuple(nf, nx, ny));
      }
      nf = f + 1;
    }
    if (nf == 2) {
      continue;
    }
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      if (dist[nf][nx][ny] != inf) {
        continue;
      }
      dist[nf][nx][ny] = dist[f][x][y] + 1;
      que.push(make_tuple(nf, nx, ny));
    }
  }
  int ans = min(dist[0][gx][gy], dist[1][gx][gy]);
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
