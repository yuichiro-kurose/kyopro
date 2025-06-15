// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string t;
  cin >> t;
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<string>> s(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s[i].resize(a[i]);
    for (int j = 0; j < a[i]; j++) {
      cin >> s[i][j];
    }
  }
  vector<map<string, int>> dp(n + 1);
  for (int i = 0; i <= n; i++) {
    dp[i][""] = 0;
    for (int j = 1; j <= t.size(); j++) {
      dp[i][t.substr(0, j)] = inf;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= t.size(); j++) {
      dp[i + 1][t.substr(0, j)] = dp[i][t.substr(0, j)];
    }
    for (int j = 0; j <= t.size(); j++) {
      string u = t.substr(0, j);
      for (int k = 0; k < a[i]; k++) {
        string v = u + s[i][k];
        if (dp[i + 1].count(v)) {
          dp[i + 1][v] = min(dp[i + 1][v], dp[i][u] + 1);
        }
      }
    }
  }
  if (dp[n][t] == inf) {
    cout << -1 << endl;
  } else {
    cout << dp[n][t] << endl;
  }
  return 0;
}
