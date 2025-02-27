// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

const vector<int> dx = {0, 1, 0, 1};
const vector<int> dy = {0, 0, 1, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, q; cin >> h >> w >> q;
  vector<vector<int>> a(h, vector<int>(w, 0));
  vector<vector<bool>> f(h, vector<bool>(w, false));
  rep(i, q) {
    int type; cin >> type;
    if (type == 1) {
      int x, y, c; cin >> x >> y >> c;
      x--; y--;
      rep(d, 4) {
        int nx = x + dx[d], ny = y + dy[d];
        if (f[nx][ny]) continue;
        a[nx][ny] = c;
      }
    }
    else {
      int x, y; cin >> x >> y;
      x--; y--;
      rep(d, 4) {
        int nx = x + dx[d], ny = y + dy[d];
        f[nx][ny] = true;
      }
    }
  }
  rep(i, h) {
    rep(j, w) {
      if (j > 0) cout << ' ';
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
