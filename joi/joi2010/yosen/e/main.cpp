// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 100000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w, h;
  cin >> w >> h;
  vector<vector<vector<vector<int>>>> dp(h + 1, vector<vector<vector<int>>>(w + 1, vector<vector<int>>(2, vector<int>(2, 0))));
  dp[1][2][0][0] = 1;
  dp[2][1][1][0] = 1;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (i == 1 && j == 1 || i == 1 && j == 2 || i == 2 && j == 1) {
        continue;
      }
      dp[i][j][0][0] = (dp[i][j][0][0] + dp[i][j - 1][0][0] + dp[i][j - 1][0][1]) % mod;
      dp[i][j][0][1] = (dp[i][j][0][1] + dp[i][j - 1][1][0]) % mod;
      dp[i][j][1][0] = (dp[i][j][1][0] + dp[i - 1][j][1][0] + dp[i - 1][j][1][1]) % mod;
      dp[i][j][1][1] = (dp[i][j][1][1] + dp[i - 1][j][0][0]) % mod;
    }
  }
  int ans = (dp[h][w][0][0] + dp[h][w][0][1] + dp[h][w][1][0] + dp[h][w][1][1]) % mod;
  cout << ans << endl;
  return 0;
}
