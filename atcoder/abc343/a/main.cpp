// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  for (int ans = 0; ans <= 9; ans++) {
    if (ans != a + b) {
      cout << ans << endl;
      break;
    }
  }
  return 0;
}
