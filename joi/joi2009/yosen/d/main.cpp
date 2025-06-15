// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, n;
  cin >> m >> n;
  vector<vector<int>> g(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
    }
  }
  int ans = 0;
  auto dfs = [&](auto dfs, int x, int y, int now) -> void {
    g[x][y] = 0;
    ans = max(ans, now);
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }
      if (g[nx][ny] == 0) {
        continue;
      }
      dfs(dfs, nx, ny, now + 1);
    }
    g[x][y] = 1;
  };
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (g[i][j] == 0) {
        continue;
      }
      dfs(dfs, i, j, 1);
    }
  }
  cout << ans << endl;
  return 0;
}
