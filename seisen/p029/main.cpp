// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c; cin >> r >> c;
  int sx, sy; cin >> sx >> sy;
  sx--; sy--;
  int gx, gy; cin >> gx >> gy;
  gx--; gy--;
  vector<vector<char>> g(r, vector<char>(c));
  rep(i, r) rep(j, c) cin >> g[i][j];
  vector<vector<int>> dist(r, vector<int>(c, -1));
  queue<pair<int, int>> que;
  dist[sx][sy] = 0;
  que.push(make_pair(sx, sy));
  while (!que.empty()) {
    int x = que.front().first, y = que.front().second;
    que.pop();
    rep(d, 4) {
      int nx = x + dx[d], ny = y + dy[d];
      if (g[nx][ny] == '#') continue;
      if (dist[nx][ny] != -1) continue;
      dist[nx][ny] = dist[x][y] + 1;
      que.push(make_pair(nx, ny));
    }
  }
  cout << dist[gx][gy] << endl;
  return 0;
}
