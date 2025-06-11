// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> x(n + 1, vector<int>(3));
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> x[i][j];
    }
  }
  vector<vector<int>> dp(n + 1, vector<int>(3, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (j == k) {
          continue;
        }
        dp[i][j] = max(dp[i][j], dp[i - 1][k] + x[i][j]);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}
