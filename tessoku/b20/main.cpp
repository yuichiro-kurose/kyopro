// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));
  for (int i = 0; i <= s.size(); i++) {
    for (int j = 0; j <= t.size(); j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = max(i, j);
        continue;
      }
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
      }
    }
  }
  cout << dp[s.size()][t.size()] << endl;
  return 0;
}
