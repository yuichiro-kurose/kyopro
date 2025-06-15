// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> c(m + 1, 0);
  for (int i = 1; i <= m; i++) {
    cin >> c[i];
  }
  vector<vector<int>> dp(m + 1, vector<int>(n + 1, inf));
  dp[0][0] = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (j - c[i] >= 0) {
        dp[i][j] = min(dp[i - 1][j], dp[i][j - c[i]] + 1);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[m][n] << endl;
  return 0;
}
