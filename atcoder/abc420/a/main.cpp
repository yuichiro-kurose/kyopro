// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y;
  cin >> x >> y;
  int ans = (x + y) % 12;
  if (ans == 0) {
    ans = 12;
  }
  cout << ans << endl;
  return 0;
}
