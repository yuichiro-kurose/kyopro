// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> d(n + 1), c(m + 1);
  for (int i = 1; i <= n; i++) {
    cin >> d[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> c[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, inf));
  for (int i = 0; i <= n; i++) {
    if (i == 0) {
      for (int j = 0; j <= m; j++) {
        dp[i][j] = 0;
      }
    } else {
      for (int j = i; j <= m; j++) {
        dp[i][j] = min(dp[i - 1][j - 1] + d[i] * c[j], dp[i][j - 1]);
      }
    }
  }
  cout << dp[n][m] << endl;
  return 0;
}
