// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t, s;
  cin >> n >> t >> s;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(t + 1, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= t; j++) {
      if (j + b[i] > t || (j < s && s < j + b[i])) {
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
      } else {
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        dp[i + 1][j + b[i]] = max(dp[i + 1][j + b[i]], dp[i][j] + a[i]);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= t; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}
