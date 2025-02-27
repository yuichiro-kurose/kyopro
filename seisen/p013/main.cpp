// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c; cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  rep(i, r) rep(j, c) cin >> a[i][j];
  int ans = 0;
  rep(i, 1 << r) {
    int now = 0;
    rep(j, c) {
      int x = 0, y = 0;
      rep(k, r) {
        if ((i >> k) & 1) {
          if (a[k][j] == 0) y++;
          else x++;
        }
        else {
          if (a[k][j] == 0) x++;
          else y++;
        }
      }
      now += max(x, y);
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}
