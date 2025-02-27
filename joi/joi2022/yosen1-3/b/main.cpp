// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s; cin >> s;
  int a; cin >> a;
  int b; cin >> b;
  int ans = 250;
  s -= a;
  while (s > 0) {
    ans += 100;
    s -= b;
  }
  cout << ans << endl;
  return 0;
}
