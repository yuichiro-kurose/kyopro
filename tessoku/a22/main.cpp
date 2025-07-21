// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n - 1), b(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
    a[i]--;
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> b[i];
    b[i]--;
  }
  vector<int> dp(n, -inf);
  dp[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    dp[a[i]] = max(dp[a[i]], dp[i] + 100);
    dp[b[i]] = max(dp[b[i]], dp[i] + 150);
  }
  cout << dp[n - 1] << endl;
  return 0;
}
