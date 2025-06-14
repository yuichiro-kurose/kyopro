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
  vector<vector<char>> g(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> g[i][j];
    }
  }
  bool f = true;
  auto dfs = [&](auto dfs, int x, int y) -> void {
    g[x][y] = '#';
    if (x == 0 || x == h - 1 || y == 0 || y == w - 1) {
      f = false;
    }
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (g[nx][ny] == '#') {
        continue;
      } 
      dfs(dfs, nx, ny);
    }
  };
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (g[i][j] == '.') {
        f = true;
        dfs(dfs, i, j);
        if (f) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
