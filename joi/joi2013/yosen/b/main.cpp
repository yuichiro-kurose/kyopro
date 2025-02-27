// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(3));
  rep(i, n) rep(j, 3) cin >> a[i][j];
  vector<int> ans(n, 0);
  rep(i, 3) rep(j, n) {
    bool f = true;
    rep(k, n) if (k != j && a[k][i] == a[j][i]) f = false;
    if (f) ans[j] += a[j][i];
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}
