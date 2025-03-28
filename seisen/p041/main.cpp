// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d, n;
  cin >> d >> n;
  vector<int> t(d);
  for (int i = 0; i < d; i++) {
    cin >> t[i];
  }
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }
  vector<vector<int>> dp(d, vector<int>(n, -inf));
  for (int i = 0; i < d; i++) {
    if (i == 0) {
      for (int j = 0; j < n; j++) {
        if (a[j] <= t[i] && t[i] <= b[j]) {
          dp[i][j] = 0;
        }
      }
    } else {
      for (int j = 0; j < n; j++) {
        if (a[j] <= t[i] && t[i] <= b[j]) {
          for (int k = 0; k < n; k++) {
            dp[i][j] = max(dp[i][j], dp[i - 1][k] + abs(c[k] - c[j]));
          }
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, dp[d - 1][i]);
  }
  cout << ans << endl;
  return 0;
}
