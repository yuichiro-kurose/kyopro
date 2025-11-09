// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, n;
  cin >> x >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  int q;
  cin >> q;
  vector<bool> f(n, true);
  int ans = x;
  while (q--) {
    int p;
    cin >> p;
    p--;
    if (f[p]) {
      ans += w[p];
      f[p] = false;
    } else {
      ans -= w[p];
      f[p] = true;
    }
    cout << ans << endl;
  }
  return 0;
}
