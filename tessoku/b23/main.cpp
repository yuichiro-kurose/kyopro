// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  vector<vector<double>> dp(1 << n, vector<double>(n, inf));
  dp[0][0] = 0;
  for (int i = 0; i < 1 << n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j] == inf) {
        continue;
      }
      for (int k = 0; k < n; k++) {
        if ((i >> k) & 1) {
          continue;
        }
        double dist = sqrt((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]));
        dp[i | (1 << k)][k] = min(dp[i | (1 << k)][k], dp[i][j] + dist);
      }
    }
  }
  cout << dp[(1 << n) - 1][0] << endl;
  return 0;
}
