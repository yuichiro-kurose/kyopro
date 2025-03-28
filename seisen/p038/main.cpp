// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  while (q--) {
    string x, y;
    cin >> x >> y;
    vector<vector<int>> dp(x.size() + 1, vector<int>(y.size() + 1, 0));
    for (int i = 1; i <= x.size(); i++) {
      for (int j = 1; j <= y.size(); j++) {
        if (x[i - 1] == y[j - 1]) {
          dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
        } else {
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }
    cout << dp[x.size()][y.size()] << endl;
  }
  return 0;
}
