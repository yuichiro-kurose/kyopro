// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<vector<int>> dx = {{-1, 1}, {0, 0}};
const vector<vector<int>> dy = {{0, 0}, {1, -1}};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  int sx, sy;
  for (int i = 0; i < h; i++) {
    cin >> s[i];
    for (int j = 0; j < w; j++) {
      if (s[i][j] == 'S') {
        sx = i;
        sy = j;
      }
    }
  }
  vector<vector<vector<int>>> dist(2, vector<vector<int>>(h, vector<int>(w, -1)));
  queue<tuple<int, int, int>> que;
  dist[0][sx][sy] = 0;
  dist[1][sx][sy] = 0;
  que.push(make_tuple(0, sx, sy));
  que.push(make_tuple(1, sx, sy));
  while (!que.empty()) {
    tuple<int, int, int> tup = que.front();
    que.pop();
    int f = get<0>(tup);
    int g = abs(f - 1);
    int x = get<1>(tup), y = get<2>(tup);
    for (int d = 0; d < 2; d++) {
      int nx = x + dx[f][d], ny = y + dy[f][d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == 'G') {
        cout << dist[f][x][y] + 1 << endl;
        return 0;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      if (dist[g][nx][ny] != -1) {
        continue;
      }
      dist[g][nx][ny] = dist[f][x][y] + 1;
      que.push(make_tuple(g, nx, ny));
    }
  }
  cout << -1 << endl;
  return 0;
}
