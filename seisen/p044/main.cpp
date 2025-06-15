// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<int>> dp(2, vector<int>(1000000, inf));
  dp[0][0] = 0;
  dp[1][0] = 0;
  for (int i = 1; i < 1000000; i++) {
    for (int j = 1; j < 200; j++) {
      int x = j * (j + 1) * (j + 2) / 6;
      if (i - x >= 0) {
        dp[0][i] = min(dp[0][i], dp[0][i - x] + 1);
        if (x & 1) {
          dp[1][i] = min(dp[1][i], dp[1][i - x] + 1);
        }
      }
    }
  }
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    cout << dp[0][n] << ' ' << dp[1][n] << endl;
  }
  return 0;
}
