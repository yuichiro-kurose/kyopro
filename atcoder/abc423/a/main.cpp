// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, c;
  cin >> x >> c;
  int ans = 0;
  for (int i = 0; i * 1000 + c * i <= x; i++) {
    ans = max(ans, i * 1000);
  }
  cout << ans << endl;
  return 0;
}
