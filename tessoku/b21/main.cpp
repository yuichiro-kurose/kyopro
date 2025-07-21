// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int>> dp(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    dp[i][i] = 1;
  }
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      dp[i][i + 1] = 2;
    } else {
      dp[i][i + 1] = 1;
    }
  }
  for (int len = 2; len < n; len++) {
    for (int l = 0; l < n - len; l++) {
      int r = l + len;
      if (s[l] == s[r]) {
        dp[l][r] = dp[l + 1][r - 1] + 2;
      } else {
        dp[l][r] = max(dp[l + 1][r], dp[l][r - 1]);
      }
    }
  }
  cout << dp[0][n - 1] << endl;
  return 0;
}
