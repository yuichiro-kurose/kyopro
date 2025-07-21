// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, lim;
  cin >> n >> lim;
  vector<int> w(n + 1), v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
  }
  vector<vector<long long>> dp(n + 1, vector<long long>(100001, inf));
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= 100000; j++) {
      if (j - v[i] >= 0) {
        dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= 100000; i++) {
    if (dp[n][i] <= lim) {
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
