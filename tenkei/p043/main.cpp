// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, rs, cs, rt, ct;
  cin >> h >> w >> rs >> cs >> rt >> ct;
  rs--;
  cs--;
  rt--;
  ct--;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  vector<vector<int>> g(h * w);
  vector<vector<int>> dist(h, vector<int>(w, inf));
  priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> que;
  dist[rs][cs] = 0;
  for (int i = 0; i < 4; i++) {
    que.push(make_tuple(0, i, rs, cs));
  }
  while (!que.empty()) {
    auto [d, a, x, y] = que.top();
    que.pop();
    if (dist[x][y] < d) {
      continue;
    }
    for (int dir = 0; dir < 4; dir++) {
      int cost = 1;
      if (dir == a) {
        cost = 0;
      }
      int nx = x + dx[dir], ny = y + dy[dir];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == '#') {
        continue;
      }
      if (dist[nx][ny] < dist[x][y] + cost) {
        continue;
      }
      dist[nx][ny] = dist[x][y] + cost;
      que.push(make_tuple(dist[nx][ny], dir, nx, ny));
    }
  }
  cout << dist[rt][ct] << endl;
  return 0;
}
