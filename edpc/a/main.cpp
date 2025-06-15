// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> h(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> dp(n, inf);
  dp[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    if (i + 2 < n) {
      dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}
