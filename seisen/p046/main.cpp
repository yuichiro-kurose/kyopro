// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> row(n), col(n);
  for (int i = 0; i < n; i++) {
    cin >> row[i] >> col[i];
  }
  vector<vector<int>> dp(n, vector<int>(n, inf));
  for (int i = 0; i < n; i++) {
    dp[i][i] = 0;
  }
  for (int len = 1; len < n; len++) {
    for (int l = 0; l < n - len; l++) {
      int r = l + len;
      for (int k = l; k < r; k++) {
        dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r] + row[l] * col[k] * col[r]);
      }
    }
  }
  cout << dp[0][n - 1] << endl;
  return 0;
}
