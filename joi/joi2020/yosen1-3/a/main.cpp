// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, l, r; cin >> x >> l >> r;
  if (x < l) cout << l << endl;
  else if (r < x) cout << r << endl;
  else cout << x << endl;
  return 0;
}
