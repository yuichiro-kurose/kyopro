// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  int ans = 0;
  for (int i = 0; i < x; i++) {
    if (i & 1) {
      ans -= 2;
    } else {
      ans += 3;
    }
  }
  cout << ans << endl;
  return 0;
}
