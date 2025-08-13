// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, q, s, t;
  cin >> n >> q >> s >> t;
  vector<long long> a(n + 1), b(n + 1, 0);
  long long ans = 0;
  for (int i = 0; i <= n; i++) {
    cin >> a[i];
    if (i > 0) {
      b[i] = a[i] - a[i - 1];
    }
    if (b[i] > 0) {
      ans -= b[i] * s;
    } else {
      ans -= b[i] * t;
    }
  }
  while (q--) {
    long long l, r, x;
    cin >> l >> r >> x;
    if (b[l] > 0) {
      if (x > - b[l]) {
        ans -= x * s;
      } else {
        ans -= (- b[l]) * s;
        ans -= (x + b[l]) * t;
      }
    } else {
      if (x < - b[l]) {
        ans -= x * t;
      } else {
        ans -= (- b[l]) * t;
        ans -= (x + b[l]) * s;
      }
    }
    b[l] += x;
    if (r == n) {
      cout << ans << endl;
      continue;
    }
    if (b[r + 1] < 0) {
      if (x > b[r + 1]) {
        ans += x * t;
      } else {
        ans += b[r + 1] * t;
        ans += (x - b[r + 1]) * s;
      }
    } else {
      if (x < b[r + 1]) {
        ans += x * s;
      } else {
        ans += b[r + 1] * s;
        ans += (x - b[r + 1]) * t;
      }
    }
    b[r + 1] -= x;
    cout << ans << endl;
  }
  return 0;
}
