// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  long long ans = 0;
  int r = n - 1;
  for (int i = 0; i < n; i++) {
    ans += a[i] * (n - 1);
    while (i < r && a[i] + a[r] >= 1e8) {
      r--;
    }
    r = max(i, r);
    ans -= (long long) 1e8 * ((n - 1) - r);
  }
  cout << ans << endl;
  return 0;
}
