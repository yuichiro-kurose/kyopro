// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w; cin >> h >> w;
  vector<vector<char>> g(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> g[i][j];
  rep(i, h) {
    rep(j, w) {
      int now = j, ans = -1;
      while (now >= 0) {
        if (g[i][now] == 'c') {
          ans = j - now;
          break;
        }
        now--;
      }
      if (j > 0) cout << ' ';
      cout << ans;
    }
    cout << endl;
  }
  return 0;
}
