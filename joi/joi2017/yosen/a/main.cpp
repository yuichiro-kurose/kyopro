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
  int ans = 0;
  if (a < 0) {
    ans -= a * c; 
    a = 0;
  }
  if (a == 0) ans += d;
  ans += (b - a) * e;
  cout << ans << endl;
  return 0;
}
