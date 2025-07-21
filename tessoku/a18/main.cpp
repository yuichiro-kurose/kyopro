// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s;
  cin >> n >> s;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
  dp[0][0] = true;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= s; j++) {
      if (j - a[i] < 0) {
        dp[i][j] = dp[i - 1][j];
      } else {
        dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - a[i]]);
      }
    }
  }
  if (dp[n][s]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
