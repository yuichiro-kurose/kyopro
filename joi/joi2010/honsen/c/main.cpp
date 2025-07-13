// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> dp(n, -1);
  auto f = [&](auto f, int x) -> int {
    if (dp[x] != -1) {
      return dp[x];
    }
    int left = 0, mid = a[x], right = 0;
    if (x > 0) {
      left = a[x - 1];
    }
    if (x < n - 1) {
      right = a[x + 1];
    }
    if (left < mid && mid > right) {
      return dp[x] = l - mid;
    }
    if (left < mid && mid < right) {
      return dp[x] = f(f, x + 1) + l - mid;
    }
    if (left > mid && mid > right) {
      return dp[x] = f(f, x - 1) + l - mid;
    }
    return dp[x] = max(f(f, x - 1), f(f, x + 1)) + l - mid;
  };
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, f(f, i));
  }
  cout << ans << endl;
  return 0;
}
