// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> ok(1 << n, false);
    for (int i = 1; i <= s.size(); i++) {
      if (s[i - 1] == '0') {
        ok[i] = true;
      }
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(1 << n, false));
    dp[0][0] = true;
    bool f = false;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 1 << n; j++) {
        if (!dp[i][j]) {
          continue;
        }
        for (int k = 0; k < n; k++) {
          if ((j >> k) & 1) {
            continue;
          }
          int v = j + (1 << k);
          if (ok[v]) {
            dp[i + 1][v] = true;
            if (i + 1 == n) {
              f = true;
            }
          }
        }
      }
    }
    if (f) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
