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
  vector<vector<long long>> a(h, vector<long long>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<bool>> color(h, vector<bool>(w, false));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if ((i + j) & 1) {
        color[i][j] = true;
      }
    }
  }
  vector<vector<int>> num(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      num[i][j] = w * i + j;
    }
  }
  long long ans = 0;
  for (int bit = 0; bit < (1 << (h * w)); bit++) {
    vector<vector<bool>> vis(h, vector<bool>(w, false));
    int cnt1, cnt2;
    auto dfs = [&](auto dfs, int x, int y) -> void {
      vis[x][y] = true;
      if (color[x][y]) {
        cnt1++;
      } else {
        cnt2++;
      }
      for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          continue;
        }
        if ((bit >> num[nx][ny]) & 1) {
          continue;
        }
        if (vis[nx][ny]) {
          continue;
        }
        dfs(dfs, nx, ny);
      }
    };
    bool f = true;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if ((bit >> num[i][j]) & 1) {
          continue;
        }
        if (vis[i][j]) {
          continue;
        }
        cnt1 = 0, cnt2 = 0;
        dfs(dfs, i, j);
        if (cnt1 != cnt2) {
          f = false;
        }
      }
    }
    if (f) {
      long long now = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if ((bit >> num[i][j]) & 1) {
            now ^= a[i][j];
          }
        }
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}
