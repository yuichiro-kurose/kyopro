// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a; cin >> a;
  int b; cin >> b;
  int c; cin >> c;
  int d; cin >> d;
  int e; cin >> e;
  int f; cin >> f;
  cout << a + b + c + d + e + f - min({a, b, c, d}) - min(e, f) << endl;
  return 0;
}
