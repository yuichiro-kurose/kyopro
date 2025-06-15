// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<char>> s(5, vector<char>(n));
  vector<vector<int>> cnt(n, vector<int>(3, 0));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
      if (s[i][j] == 'R') {
        cnt[j][0]++;
      }
      if (s[i][j] == 'B') {
        cnt[j][1]++;
      }
      if (s[i][j] == 'W') {
        cnt[j][2]++;
      }
    }
  }
  vector<vector<int>> dp(n, vector<int>(3, inf));
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      for (int j = 0; j < 3; j++) {
        dp[i][j] = 5 - cnt[i][j];
      }
    } else {
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          if (j == k) {
            continue;
          }
          dp[i][j] = min(dp[i][j], dp[i - 1][k] + 5 - cnt[i][j]);
        }
      }
    }
  }
  int ans = inf;
  for (int i = 0; i < 3; i++) {
    ans = min(ans, dp[n - 1][i]);
  }
  cout << ans << endl;
  return 0;
}
