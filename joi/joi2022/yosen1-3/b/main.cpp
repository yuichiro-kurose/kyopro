// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s, a, b;
  cin >> s >> a >> b;
  int ans = 250;
  s -= a;
  while (s > 0) {
    ans += 100;
    s -= b;
  }
  cout << ans << endl;
  return 0;
}
