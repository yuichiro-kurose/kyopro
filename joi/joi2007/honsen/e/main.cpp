// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> p(n), q(n), r(n), b(n), par(n, -1);
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> q[i] >> r[i] >> b[i];
    r[i]--;
    b[i]--;
    if (r[i] != -1) {
      par[r[i]] = i;
    }
    if (b[i] != -1) {
      par[b[i]] = i;
    }
  }
  auto f = [&](auto f, int root) -> ll {
    if (root == -1) {
      return 1;
    }
    ll left = f(f, r[root]), right = f(f, b[root]);
    return left * right * (p[root] + q[root]) / gcd(p[root] * left, q[root] * right);
  };
  int start;
  for (int i = 0; i < n; i++) {
    if (par[i] == -1) {
      start = i;
    }
  }
  cout << f(f, start) << endl;
  return 0;
}
