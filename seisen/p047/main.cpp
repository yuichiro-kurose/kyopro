// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i + n] = a[i];
  }
  vector<vector<long long>> dp(n + n, vector<long long>(n + n, -inf));
  for (int i = 0; i < n + n; i++) {
    if (n & 1) {
      dp[i][i] = a[i];
    } else {
      dp[i][i] = 0;
    }
  }
  for (int len = 1; len < n; len++) {
    for (int l = 0; l < n + n - len; l++) {
      int r = l + len;
      if ((n - len) & 1) {
        dp[l][r] = max(dp[l + 1][r] + a[l], dp[l][r - 1] + a[r]);
      } else {
        if (a[l] > a[r]) {
         dp[l][r] = dp[l + 1][r];
        } else {
         dp[l][r] = dp[l][r - 1];
        }
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, dp[i][i + n - 1]);
  }
  cout << ans << endl;
  return 0;
}
