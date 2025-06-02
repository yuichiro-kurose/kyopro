// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> dp(h, vector<int>(w, 0));
  dp[0][0] = 1;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        continue;
      }
      if (i > 0 && j > 0) {
        dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
      } else if (i > 0) {
        dp[i][j] = dp[i - 1][j] % mod;
      } else if (j > 0) {
        dp[i][j] = dp[i][j - 1] % mod;
      }
    }
  }
  cout << dp[h - 1][w - 1] << endl;
  return 0;
}
