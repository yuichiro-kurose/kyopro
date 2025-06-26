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
  long long ans = 0;
  vector<long long> b(n - 1);
  for (int i = 0; i < n - 1; i++) {
    b[i] = a[i + 1] - a[i];
    ans += abs(b[i]);
  }
  while (q--) {
    int l, r, v;
    cin >> l >> r >> v;
    l--;
    r--;
    if (l >= 1) {
      ans += abs(b[l - 1] + v) - abs(b[l - 1]);
      b[l - 1] += v;
    }
    if (r <= n - 2) {
      ans += abs(b[r] - v) - abs(b[r]);
      b[r] -= v;
    }
    cout << ans << endl;
  }
  return 0;
}
