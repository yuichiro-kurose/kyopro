// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<long long> a(n + n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i + n] = a[i];
  }
  for (int i = 1; i <= n + n; i++) {
    a[i] += a[i - 1];
  }
  int t = 0;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int c;
      cin >> c;
      t = (t + c) % n;
    }
    if (type == 2) {
      int l, r;
      cin >> l >> r;
      cout << a[r + t] - a[l - 1 + t] << endl;
    }
  }
  return 0;
}
