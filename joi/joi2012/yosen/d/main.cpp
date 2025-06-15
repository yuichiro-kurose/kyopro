// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 10000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> fix(n + 1, -1);
  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    fix[a] = b - 1;
  }
  vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(3, vector<int>(3, 0)));
  dp[0][0][0] = 1;
  for (int i = 1; i <= n; i++) {
    vector<int> p;
    if (fix[i] == -1) {
      p = {0, 1, 2};
    } else {
      p = {fix[i]};
    }
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        for (int pasta : p) {
          if (i >= 3 && j == k && k == pasta) {
            continue;
          }
          dp[i][k][pasta] = (dp[i][k][pasta] + dp[i - 1][j][k]) % mod;
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ans = (ans + dp[n][i][j]) % mod;
    }
  }
  cout << ans << endl;
  return 0;
}
