// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }
  int ans = 0;
  vector<vector<bool>> vis;
  int sx, sy;
  auto dfs = [&](auto dfs, int x, int y, int cnt) -> void {
    vis[x][y] = true;
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx == sx && ny == sy) {
        ans = max(ans, cnt + 1);
        continue;
      }
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (c[nx][ny] == '#') {
        continue;
      }
      if (vis[nx][ny]) {
        continue;
      }
      dfs(dfs, nx, ny, cnt + 1);
    }
    vis[x][y] = false;
  };
  for (sx = 0; sx < h; sx++) {
    for (sy = 0; sy < w; sy++) {
      if (c[sx][sy] == '#') {
        continue;
      }
      vis = vector<vector<bool>>(h, vector<bool>(w, false));
      dfs(dfs, sx, sy, 0);
    }
  }
  if (ans < 3) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
