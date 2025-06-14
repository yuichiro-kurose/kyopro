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
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  vector<vector<bool>> vis(h, vector<bool>(w, false));
  auto bfs = [&](int sx, int sy) -> int {
    int ret = 1;
    vis[sx][sy] = true;
    queue<pair<int, int>> que;
    que.push(make_pair(sx, sy));
    vector<pair<int, int>> a;
    while (!que.empty()) {
      auto p = que.front();
      que.pop();
      int x = p.first, y = p.second;
      bool f = false;
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 | ny >= w) {
          continue;
        }
        if (s[nx][ny] == '#') {
          f = true;
        }
      }
      if (f) {
        a.push_back(make_pair(x, y));
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
        if (vis[nx][ny]) {
          continue;
        }
        vis[nx][ny] = true;
        que.push(make_pair(nx, ny));
        ret++;
      }
    }
    for (auto p : a) {
      vis[p.first][p.second] = false;
    }
    return ret;
  };
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] != '#' && !vis[i][j]) {
        ans = max(ans, bfs(i, j));
      }
    }
  }
  cout << ans << endl;
  return 0;
}
