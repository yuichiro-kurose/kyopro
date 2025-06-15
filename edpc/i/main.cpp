// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<double> p(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> p[i];
  }
  vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      if (j > 0) {
        dp[i][j] = dp[i - 1][j - 1] * p[i] + dp[i - 1][j] * (1 - p[i]);
      } else {
        dp[i][j] = dp[i - 1][j] * (1 - p[i]);
      }
    }
  }
  double ans = 0;
  for (int i = n / 2 + 1; i <= n; i++) {
    ans += dp[n][i];
  }
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}
