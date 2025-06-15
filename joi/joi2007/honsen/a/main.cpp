// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int ans = 0;
  for (int i = 1; i <= n - k + 1; i++) {
    ans = max(ans, a[i + k - 1] - a[i - 1]);
  }
  cout << ans << endl;
  return 0;
}
