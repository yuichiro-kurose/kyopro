// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int ans = 0;
  if (a < 0) {
    ans -= a * c; 
    a = 0;
  }
  if (a == 0) {
    ans += d;
  }
  ans += (b - a) * e;
  cout << ans << endl;
  return 0;
}
