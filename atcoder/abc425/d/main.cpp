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
  vector<vector<int>> dist(h, vector<int>(w, inf));
  queue<tuple<int, int, int>> que;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
      if (s[i][j] == '#') {
        dist[i][j] = 0;
        que.push(make_tuple(i, j, 0));
      }
    }
  }
  int ans = 0, now = 0;
  vector<pair<int, int>> pos(0);
  while (!que.empty()) {
    ans++;
    auto [x, y, z] = que.front();
    que.pop();
    if (z != now) {
      for (auto [i, j] : pos) {
        s[i][j] = '#';
      }
      pos = vector<pair<int, int>>(0);
      now = z;
    }
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      int cnt = 0;
      for (int e = 0; e < 4; e++) {
        int mx = nx + dx[e], my = ny + dy[e];
        if (mx < 0 || mx >= h || my < 0 || my >= w) {
          continue;
        }
        if (s[mx][my] == '#') {
          cnt++;
        }
      }
      if (cnt != 1) {
        continue;
      }
      dist[nx][ny] = dist[x][y] + 1;
      que.push(make_tuple(nx, ny, dist[nx][ny]));
      pos.push_back(make_pair(nx, ny));
    }
  }
  cout << ans << endl;
  return 0;
}
