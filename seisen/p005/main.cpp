// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int ans;
  if (x < y) {
    ans = min(a * x + b * x, c * x * 2) + min((y - x) * b, (y - x) * c * 2);
  } else {
    ans = min(a * y + b * y, c * y * 2) + min((x - y) * a, (x - y) * c * 2);
  }
  cout << ans << endl;
  return 0;
}
