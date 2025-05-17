// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n + 1, 0), sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum[i] = a[i] + sum[i - 1];
  }
  long long ans = 0;
  for (int i = 1; i <= n - 1; i++) {
    ans += a[i] * (sum[n] - sum[i]);
  }
  cout << ans << endl;
  return 0;
}
