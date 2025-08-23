// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n), a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> a[i] >> b[i];
  }
  vector<vector<int>> dp(n + 1, vector<int>(1001));
  for (int i = 0; i <= 1000; i++) {
    dp[n][i] = i;
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= 1000; j++) {
      int nj;
      if (p[i] >= j) {
        dp[i][j] = dp[i + 1][j + a[i]];
      } else {
        dp[i][j] = dp[i + 1][max(0, j - b[i])];
      }
    }
  }
  vector<int> sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    sum[i] = sum[i - 1] + b[i - 1];
  }
  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    int idx = 0;
    if (x >= 500) {
      idx = upper_bound(sum.begin(), sum.end(), x - 500) - sum.begin();
      if (idx < n) {
        cout << dp[idx][x - sum[idx]] << endl;
      } else {
        cout << x - sum[n] << endl;
      }
    } else {
      cout << dp[0][x] << endl;
    }
  }
  return 0;
}
