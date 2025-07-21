// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 2; i < n; i++) {
    cin >> b[i];
  }
  vector<int> dp(n);
  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    if (i == 1) {
      dp[i] = a[i];
    } else {
      dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}
