// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m, k;
  cin >> n >> m >> k;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<long long>> cost(n, vector<long long>(m + 1, inf));
  for (int i = 0; i < n; i++) {
    long long min_val = inf, max_val = 0;
    for (int j = i; j < n && j - i + 1 <= m; j++) {
      min_val = min(min_val, a[j]);
      max_val = max(max_val, a[j]);
      long long s = j - i + 1;
      cost[i][s] = k + s * (max_val - min_val);
    }
  }
  vector<long long> dp(n + 1, inf);
  dp[0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n && j - i <= m; j++) {
      dp[j] = min(dp[j], dp[i] + cost[i][j - i]);
    }
  }
  cout << dp[n] << endl;
  return 0;
}
