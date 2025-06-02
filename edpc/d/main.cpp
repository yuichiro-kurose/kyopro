// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, lim;
  cin >> n >> lim;
  vector<int> w(n + 1), v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
  }
  vector<vector<long long>> dp(n + 1, vector<long long>(lim + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= lim; j++) {
      if (j - w[i] >= 0) {
        dp[i][j] = max({dp[i][j], dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]});
      } else {
        dp[i][j] = max(dp[i][j], dp[i - 1][j]);
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i <= lim; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}
