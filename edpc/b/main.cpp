// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> dp(n, inf);
  dp[0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < min(n, i + k + 1); j++) {
      dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}
