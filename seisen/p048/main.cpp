// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
      cin >> w[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -inf));
    for (int i = 0; i <= n; i++) {
      dp[i][i] = 0;
      if (i + 1 <= n) {
        dp[i][i + 1] = 0;
      }
    }
    for (int len = 2; len <= n; len++) {
      for (int i = 0; i + len <= n; i++) {
        int j = i + len;
        if (dp[i + 1][j - 1] == (j - 1) - (i + 1)) {
          if (abs(w[i] - w[j - 1]) <= 1) {
            dp[i][j] = j - i;
          } else {
            dp[i][j] = (j - 1) - (i + 1);
          }
        }
        for (int k = i + 1; k <= j - 1; k++) {
          dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j]);
        }
      }
    }
    cout << dp[0][n] << endl;
  }
  return 0;
}
