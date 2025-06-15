// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<vector<int>> dx = {{1, 0, -1, -1, -1, 0}, {1, 1, 0, -1, 0, 1}};
const vector<vector<int>> dy = {{0, -1, -1, 0, 1, 1}, {0, -1, -1, 0, 1, 1}};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w, h;
  cin >> w >> h;
  vector<vector<int>> g(h + 2, vector<int>(w + 2, 0));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> g[i][j];
    }
  }
  auto bfs = [&]() -> vector<vector<bool>> {
    vector<vector<bool>> vis(h + 2, vector<bool>(w + 2, false));
    queue<pair<int, int>> que;
    vis[0][0] = true;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
      auto p = que.front();
      que.pop();
      int y = p.first, x = p.second;
      for (int d = 0; d < 6; d++) {
        int ny = y + dy[y & 1][d], nx = x + dx[y & 1][d];
        if (nx < 0 || nx >= w + 2 || ny < 0 || ny >= h + 2) {
          continue;
        }
        if (g[ny][nx] == 1) {
          continue;
        }
        if (vis[ny][nx]) {
          continue;
        }
        vis[ny][nx] = true;
        que.push(make_pair(ny, nx));
      }
    }
    return vis;
  };
  vector<vector<bool>> vis = bfs();
  int ans = 0;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (vis[i][j]) {
        continue;
      }
      for (int d = 0; d < 6; d++) {
        int y = i + dy[i & 1][d], x = j + dx[i & 1][d];
        if (vis[y][x]) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
