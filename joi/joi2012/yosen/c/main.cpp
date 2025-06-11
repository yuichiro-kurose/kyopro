// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> d(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> d[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(100001, -inf));
  dp[0][a] = c;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= 100000; j++) {
      if (j - b >= 0) {
        dp[i][j] = max({dp[i][j], dp[i - 1][j], dp[i - 1][j - b] + d[i]});
      } else {
        dp[i][j] = max(dp[i][j], dp[i - 1][j]);
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= 100000; i++) {
    ans = max(ans, dp[n][i] / i);
  }
  cout << ans << endl;
  return 0;
}
