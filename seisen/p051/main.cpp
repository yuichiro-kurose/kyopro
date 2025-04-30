// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 10007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<vector<int>> dp(n, vector<int>(8, 0));
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < 8; j++) {
      if (i == 0 && !(j & 1)) {
        continue;
      }
      if (s[i] == 'J' && !(j & 1) || s[i] == 'O' && !(j & 2) || s[i] == 'I' && !(j & 4)) {
        continue;
      }
      if (i == 0) {
        dp[i][j] = 1;
      }
      for (int k = 0; k < 8; k++) {
        if (!(j & k)) {
          continue;
        }
        if (s[i + 1] == 'J' && !(k & 1) || s[i + 1] == 'O' && !(k & 2) || s[i + 1] == 'I' && !(k & 4)) {
          continue;
        }
        dp[i + 1][k] = (dp[i + 1][k] + dp[i][j]) % mod;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    ans = (ans + dp[n - 1][i]) % mod;
  }
  cout << ans << endl;
  return 0;
}
