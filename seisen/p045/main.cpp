// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      break;
    }
    vector<int> c(m), x(n + 1);
    for (int i = 0; i < m; i++) {
      cin >> c[i];
    }
    for (int i = 1; i <= n; i++) {
      cin >> x[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(256, inf));
    dp[0][128] = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= 255; j++) {
        for (int k = 0; k < m; k++) {
          if (j + c[k] > 255) {
            dp[i + 1][255] = min(dp[i + 1][255], dp[i][j] + (int) pow(x[i + 1] - 255, 2));
          } else if (j + c[k] < 0) {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][j] + (int) pow(x[i + 1] - 0, 2));
          } else {
            dp[i + 1][j + c[k]] = min(dp[i + 1][j + c[k]], dp[i][j] + (int) pow(x[i + 1] - (j + c[k]), 2));
          }
        }
      }
    }
    int ans = inf;
    for (int i = 0; i <= 255; i++) {
      ans = min(ans, dp[n][i]);
    }
    cout << ans << endl;
  }
  return 0;
}
