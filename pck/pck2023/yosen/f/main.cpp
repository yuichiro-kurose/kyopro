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
  vector<vector<int>> row(h, vector<int>(w - 1)), col(h - 1, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w - 1; j++) {
      cin >> row[i][j];
      row[i][j] %= 3;
    }
  }
  for (int j = 0; j < w; j++) {
    for (int i = 0; i < h - 1; i++) {
      cin >> col[i][j];
      col[i][j] %= 3;
    }
  }
  int cnt = 0;
  vector<vector<vector<int>>> dist(3, vector<vector<int>>(h, vector<int>(w, inf)));
  queue<tuple<int, int, int>> que;
  dist[0][0][0] = 0;
  que.push(make_tuple(0, 0, 0));
  while (!que.empty()) {
    tuple tup = que.front();
    que.pop();
    int r = get<0>(tup), x = get<1>(tup), y = get<2>(tup);
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (d == 0 && row[x][y] != (r + 1) % 3 ||
          d == 1 && col[x - 1][y] != (r + 1) % 3 ||
          d == 2 && row[x][y - 1] != (r + 1) % 3 ||
          d == 3 && col[x][y] != (r + 1) % 3) {
        continue;
      }
      if (dist[(r + 1) % 3][nx][ny] != inf) {
        continue;
      }
      dist[(r + 1) % 3][nx][ny] = dist[r][x][y] + 1;
      que.push(make_tuple((r + 1) % 3, nx, ny));
    }
  }
  int ans = inf;
  for (int i = 0; i < 3; i++) {
    if (dist[i][h - 1][w - 1] != -1) {
      ans = min(ans, dist[i][h - 1][w - 1]);
    }
  }
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
