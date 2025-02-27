// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  int ans = inf;
  rep(m, h) rep(n, w) {
    int now = 0;
    rep(i, h) rep(j, w) now += min(abs(i - m), abs(j - n)) * a[i][j];
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}
