// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(10);
  for (int i = 0; i < n; i++) {
    int c, g;
    cin >> c >> g;
    a[g - 1].push_back(c);
  }
  vector<vector<int>> val(10, vector<int>(1, 0));
  for (int i = 0; i < 10; i++) {
    sort(a[i].rbegin(), a[i].rend());
    for (int j = 0; j < a[i].size(); j++) {
      val[i].push_back(val[i][j] + a[i][j]);
    }
    for (int j = 1; j < val[i].size(); j++) {
      val[i][j] += j * (j - 1);
    }
  }
  vector<vector<int>> dp(11, vector<int>(k + 1, 0));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j <= k; j++) {
      for (int num = 0; num <= a[i].size() && j + num <= k; num++) {
        dp[i + 1][j + num] = max(dp[i + 1][j + num], dp[i][j] + val[i][num]);
      }
    }
  }
  cout << dp[10][k] << endl;
  return 0;
}
