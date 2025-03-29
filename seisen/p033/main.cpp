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
  int ans = h * w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
      if (s[i][j] == '#') {
        ans--;
      }
    }
  }
  auto bfs = [&]() -> vector<vector<int>> {
    vector<vector<int>> dist(h, vector<int>(w, 0));
    queue<pair<int, int>> que;
    dist[0][0] = 1;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
      auto p = que.front();
      que.pop();
      int x = p.first, y = p.second;
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        if (s[nx][ny] == '#') {
          continue;
        }
        if (dist[nx][ny] != 0) {
          continue;
        }
        dist[nx][ny] = dist[x][y] + 1;
        que.push(make_pair(nx, ny));
      }
    }
    return dist;
  };
  vector<vector<int>> dist = bfs();
  if (dist[h - 1][w - 1] == 0) {
    cout << -1 << endl;
  } else {
    ans -= dist[h - 1][w - 1];
    cout << ans << endl;
  }
  return 0;
}
