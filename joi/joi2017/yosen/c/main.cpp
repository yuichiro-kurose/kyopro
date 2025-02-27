// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, d; cin >> n >> m >> d;
  vector<vector<char>> g(n, vector<char>(m));
  rep(i, n) rep(j, m) cin >> g[i][j];
  int ans = 0;
  rep(i, n) rep(j, m) {
    int p = 2;
    rep(x, d) if (i + x >= n || g[i + x][j] == '#') {
      p--;
      break;
    }
    rep(x, d) if (j + x >= m || g[i][j + x] == '#') {
      p--;
      break;
    }
    ans += p;
  }
  cout << ans << endl;
  return 0;
}
