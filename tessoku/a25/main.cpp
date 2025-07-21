// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }
  vector<vector<long long>> dp(h, vector<long long>(w, 0));
  dp[0][0] = 1;
  for (int i = 0; i < h; i++) {
    for (int j =0; j < w; j++) {
      if (i > 0) {
        dp[i][j] += dp[i - 1][j];
      }
      if (j > 0) {
        dp[i][j] += dp[i][j - 1];
      }
      if (c[i][j] == '#') {
        dp[i][j] = 0;
      }
    }
  }
  cout << dp[h - 1][w - 1] << endl;
  return 0;
}
