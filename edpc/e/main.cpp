// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, lim;
  cin >> n >> lim;
  vector<int> w(n + 1), v(n + 1);
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
    sum += v[i];
  }
  vector<vector<long long>> dp(n + 1, vector<long long>(sum + 1, inf));
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= sum; j++) {
      if (j - v[i] >= 0) {
        dp[i][j] = min({dp[i][j], dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]});
      } else {
        dp[i][j] = min(dp[i][j], dp[i - 1][j]);
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i <= sum; i++) {
    if (dp[n][i] <= lim) {
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
