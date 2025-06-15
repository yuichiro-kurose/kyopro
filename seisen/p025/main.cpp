// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, -1, -1, 0, 1, 1, 1};
const vector<int> dy = {1, 1, 0, -1, -1, -1, 0, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int w, h; cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    vector<vector<int>> c(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> c[i][j];
      }
    }
    auto dfs = [&](auto dfs, int x, int y) -> void {
      c[x][y] = 0;
      for (int d = 0; d < 8; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        if (c[nx][ny] == 0) {
          continue;
        }
        dfs(dfs, nx, ny);
      }
    };
    int ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (c[i][j] == 1) {
          ans++;
          dfs(dfs, i, j);
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
