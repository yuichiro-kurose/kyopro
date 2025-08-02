// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int f(char c) {
  int ret = 0;
  if (c == 'a') {
    ret = 1;
  }
  if (c == 't') {
    ret = 2;
  }
  if (c == 'c') {
    ret = 3;
  }
  if (c == 'o') {
    ret = 4;
  }
  if (c == 'd') {
    ret = 5;
  }
  if (c == 'e') {
    ret = 6;
  }
  if (c == 'r') {
    ret = 7;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int>> dp(n + 1, vector<int>(8, 0));
  dp[0][0] = 1;
  for (int i = 0; i < n; i++) {
    char c = s[i];
    for (int j = 0; j <= 7; j++) {
      dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod;
      if (f(c) == j + 1) {
        dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j]) % mod;
      }
    }
  }
  cout << dp[n][7] << endl;
  return 0;
}
