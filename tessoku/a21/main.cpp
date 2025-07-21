// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n), a(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> a[i];
    p[i]--;
  }
  vector<vector<int>> dp(n, vector<int>(n));
  dp[0][n - 1] = 0;
  for (int len = n - 2; len >= 0; len--) {
    for (int l = 0; l < n - len; l++) {
      int r = l + len;
      if (l - 1 >= 0) {
        if (l <= p[l - 1] && p[l - 1] <= r) {
          dp[l][r] = max(dp[l][r], dp[l - 1][r] + a[l - 1]);
        } else {
          dp[l][r] = max(dp[l][r], dp[l - 1][r]);
        }
      }
      if (r + 1 < n) {
        if (l <= p[r + 1] && p[r + 1] <= r) {
          dp[l][r] = max(dp[l][r], dp[l][r + 1] + a[r + 1]);
        } else {
          dp[l][r] = max(dp[l][r], dp[l][r + 1]);
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, dp[i][i]);
  }
  cout << ans << endl;
  return 0;
}
