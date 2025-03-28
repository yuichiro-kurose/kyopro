// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int v, e;
  cin >> v >> e;
  vector<vector<int>> g(v, vector<int>(v, inf));
  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    g[s][t] = d;
  }
  vector<vector<int>> dp(1 << v, vector<int>(v, inf));
  dp[0][0] = 0;
  for (int i = 0; i < 1 << v; i++) {
    for (int j = 0; j < v; j++) {
      if (dp[i][j] == inf) {
        continue;
      }
      for (int k = 0; k < v; k++) {
        if (j == k) {
          continue;
        }
        if ((i >> k) & 1) {
          continue;
        }
        if (g[j][k] == inf) {
          continue;
        }
        dp[i | (1 << k)][k] = min(dp[i | (1 << k)][k], dp[i][j] + g[j][k]);
      }
    }
  }
  if (dp[(1 << v) - 1][0] == inf) {
    cout << -1 << endl;
  } else {
    cout << dp[(1 << v) - 1][0] << endl;
  }
  return 0;
}
