// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, -1, -1, 0, 1, 1, 1};
const vector<int> dy = {1, 1, 0, -1, -1, -1, 0, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  vector<vector<bool>> vis(h, vector<bool>(w, false));
  auto dfs = [&](auto dfs, int x, int y) -> void {
    vis[x][y] = true;
    for (int d = 0; d < 8; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == '.') {
        continue;
      }
      if (vis[nx][ny]) {
        continue;
      }
      dfs(dfs, nx, ny);
    }
  };
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#' && !vis[i][j]) {
        ans++;
        dfs(dfs, i, j);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
