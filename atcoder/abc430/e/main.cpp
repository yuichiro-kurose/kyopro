// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

const ull HASH_BASE = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    a += a;
    int n = b.size();
    ull t = 1, ah = 0, bh = 0;
    for (int i = 0; i < n; i++) {
      t *= HASH_BASE;
      ah = ah * HASH_BASE + (a[i] - '0');
      bh = bh * HASH_BASE + (b[i] - '0');
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
      if (ah == bh) {
        ans = i;
        break;
      } else {
        ah = ah * HASH_BASE - (a[i] - '0') * t + (a[i + n] - '0');
      }
    }
    cout << ans << endl;
  }
  return 0;
}
