// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s, a, b, x;
  cin >> s >> a >> b >> x;
  int ans = x / (a + b) * s * a + min(a, (x % (a + b))) * s;
  cout << ans << endl;
  return 0;
}
