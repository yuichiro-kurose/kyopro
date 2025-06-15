// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  int n = s.size(), m = t.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  string ans = "";
  int p = n, q = m;
  while (p >= 1 && q >= 1) {
    if (dp[p][q] == dp[p - 1][q]) {
      p--;
    } else if (dp[p][q] == dp[p][q - 1]) {
      q--;
    } else {
      ans = s[p - 1] + ans;
      p--;
      q--;
    }
  }
  cout << ans << endl;
  return 0;
}
