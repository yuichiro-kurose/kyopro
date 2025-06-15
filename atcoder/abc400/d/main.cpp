// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;
const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};
const vector<int> dx2 = {0, -1, 0, 1, 0, -2, 0, 2};
const vector<int> dy2 = {1, 0, -1, 0, 2, 0, -2, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a--;
  b--;
  c--;
  d--;
  auto dijkstra = [&]() -> vector<vector<int>> {
    vector<vector<int>> dist(h, vector<int>(w, inf));
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> que;
    dist[a][b] = 0;
    que.push(make_tuple(0, a, b));
    while (!que.empty()) {
      auto tup = que.top();
      que.pop();
      int x = get<1>(tup), y = get<2>(tup);
      {
        for (int d = 0; d < 4; d++) {
          int nx = x + dx[d], ny = y + dy[d];
          if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
            continue;
          }
          if (s[nx][ny] == '#') {
            continue;
          }
          if (dist[nx][ny] <= dist[x][y]) {
            continue;
          }
          dist[nx][ny] = dist[x][y];
          que.push(make_tuple(dist[nx][ny], nx, ny));
        }
      }
      {
        for (int d = 0; d < 8; d++) {
          int nx = x + dx2[d], ny = y + dy2[d];
          if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
            continue;
          }
          if (dist[nx][ny] <= dist[x][y] + 1) {
            continue;
          }
          dist[nx][ny] = dist[x][y] + 1;
          que.push(make_tuple(dist[nx][ny], nx, ny));
        }
      }
    }
    return dist;
  };
  vector<vector<int>> dist = dijkstra();
  cout << dist[c][d] << endl;
  return 0;
}
