// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, n;
  cin >> m >> n;
  vector<int> p(m + 1, 0);
  for (int i = 1; i <= m; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());
  for (int i = 1; i <= m; i++) {
    p[i] += p[i - 1];
  }
  vector<int> c(n + 1), e(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> c[i] >> e[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      if (j - c[i] < 0) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][0] + (p[j] - p[0]) - e[i]);
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c[i]] + (p[j] - p[j - c[i]]) - e[i]);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= m; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}
