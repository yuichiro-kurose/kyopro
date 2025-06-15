// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  int ans = 0;
  vector<vector<bool>> vis(h, vector<bool>(w, false));
  auto dfs = [&](auto dfs, int x, int y, int cnt) -> void {
    if (cnt == k) {
      ans++;
      return;
    }
    vis[x][y] = true;
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (vis[nx][ny]) {
        continue;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      dfs(dfs, nx, ny, cnt + 1);
    }
    vis[x][y] = false;
  };
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '.') {
        dfs(dfs, i, j, 0);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
