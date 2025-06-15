// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, h, m;
  cin >> n >> h >> m;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  int ans = 0;
  vector<vector<int>> dp(n + 1, vector<int>(h + 1, inf));
  dp[0][0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= h; j++) {
      if (dp[i][j] != inf && j + a[i] <= h) {
        dp[i + 1][j + a[i]] = min(dp[i + 1][j + a[i]], dp[i][j]);
        ans = i + 1;
      }
      if (dp[i][j] != inf && dp[i][j] + b[i] <= m) {
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + b[i]);
        ans = i + 1;
      }
    }
  }
  cout << ans << endl;     
  return 0;
}
