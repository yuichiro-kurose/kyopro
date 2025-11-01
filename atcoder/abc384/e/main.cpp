// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const vector<int> dx = {0, -1, 0, 1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, div;
  cin >> h >> w >> div;
  int p, q;
  cin >> p >> q;
  p--;
  q--;
  vector<vector<ll>> s(h, vector<ll>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> que;
  ll ans = s[p][q];
  s[p][q] = -1;
  for (int d = 0; d < 4; d++) {
    int x = p + dx[d], y = q + dy[d];
    if (x < 0 || x >= h || y < 0 || y >= w) {
      continue;
    }
    que.push(make_tuple(s[x][y], x, y));
  }
  while (!que.empty()) {
    auto [level, x, y] = que.top();
    que.pop();
    if (level >= (long double) ans / div) {
      continue;
    }
    if (s[x][y] == -1) {
      continue;
    }
    ans += level;
    s[x][y] = -1;
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        continue;
      }
      if (s[nx][ny] == -1) {
        continue;
      }
      que.push(make_tuple(s[nx][ny], nx, ny));
    }
  }
  cout << ans << endl;
  return 0;
}
