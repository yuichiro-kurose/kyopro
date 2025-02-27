// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  int p = 1;
  rep(i, m) {
    p += a[i];
    if (p >= n) {
      cout << i + 1 << endl;
      return 0;
    }
    p += x[p - 1];
    if (p >= n) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}
