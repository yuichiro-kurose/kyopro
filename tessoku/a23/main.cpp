// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> dp(m + 1, vector<int>(1 << n, inf));
  dp[0][0] = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 1 << n; j++) {
      int v = j;
      for (int k = 0; k < n; k++) {
        if (a[i][k]) {
          v |= (1 << k);
        }
      }
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      dp[i + 1][v] = min(dp[i + 1][v], dp[i][j] + 1);
    }
  }
  if (dp[m][(1 << n) - 1] == inf) {
    cout << -1 << endl;
  } else {
    cout << dp[m][(1 << n) - 1] << endl;
  }
  return 0;
}
