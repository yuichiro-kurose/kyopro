// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, lim;
  cin >> n >> lim;
  vector<int> v(n + 1, 0), w(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i] >> w[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(lim + 1, -inf));
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= lim; j++) {
      if (j - w[i] >= 0) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= lim; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}
