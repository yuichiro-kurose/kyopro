// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<long long>> dp(n, vector<long long>(21, 0));
  dp[0][a[0]] = 1;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 0; j <= 20; j++) {
      if (j - a[i] >= 0) {
        dp[i][j] += dp[i - 1][j - a[i]];
      }
      if (j + a[i] <= 20) {
        dp[i][j] += dp[i - 1][j + a[i]];
      }
    }
  }
  cout << dp[n - 2][a[n - 1]] << endl;
  return 0;
}
