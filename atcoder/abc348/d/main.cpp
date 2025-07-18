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
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;
  map<pair<int, int>, int> mp;
  for (int i = 0; i < n; i++) {
    int r, c, e;
    cin >> r >> c >> e;
    mp[make_pair(r - 1, c - 1)] = e;
  }
  int gx, gy;
  queue<pair<int, int>> que1;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == 'S') {
        que1.push(make_pair(i, j));
      }
      if (a[i][j] == 'T') {
        gx = i;
        gy = j;
      }
    }
  }
  while (!que1.empty()) {
    auto [sx, sy] = que1.front();
    que1.pop();
    int lim = mp[make_pair(sx, sy)];
    mp.erase(make_pair(sx, sy));
    queue<pair<int, int>> que2;
    que2.push(make_pair(sx, sy));
    vector<vector<int>> dist(h, vector<int>(w, -1));
    dist[sx][sy] = 0;
    while (!que2.empty()) {
      auto [x, y] = que2.front();
      que2.pop();
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        if (a[nx][ny] == '#') {
          continue;
        }
        if (dist[nx][ny] != -1) {
          continue;
        }
        dist[nx][ny] = dist[x][y] + 1;
        if (dist[nx][ny] < lim) {
          que2.push(make_pair(nx, ny));
        }
        if (dist[nx][ny] > lim) {
          continue;
        }
        if (mp.count(make_pair(nx, ny))) {
          que1.push(make_pair(nx, ny));
        }
        if (nx == gx && ny == gy) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
