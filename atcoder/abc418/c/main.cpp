// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> sum(n + 1);
  sum[0] = 0;
  for (int i = 1; i <= n; i++) {
    sum[i] = sum[i - 1] + a[i - 1];
  }
  while (q--) {
    int b;
    cin >> b;
    int p = upper_bound(a.begin(), a.end(), b - 1) - a.begin();
    if (p == n) {
      cout << -1 << endl;
      continue;
    }
    int cnt = a.size() - p;
    long long ans = sum[p] + (long long) cnt * (b - 1) + 1;
    cout << ans << endl;
  }
  return 0;
}
