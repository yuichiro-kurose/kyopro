// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x = i * i * i;
    if (i % 2 == 0) {
      ans += x;
    } else {
      ans -= x;
    }
  }
  cout << ans << endl;
  return 0;
}
