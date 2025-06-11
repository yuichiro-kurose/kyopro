// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0, l = 0, r = 0;
  while (n--) {
    int a;
    char s;
    cin >> a >> s;
    if (s == 'L') {
      if (l != 0) {
        ans += abs(l - a);
      }
      l = a;
    } else {
      if (r != 0) {
        ans += abs(r - a);
      }
      r = a;
    }
  }
  cout << ans << endl;
  return 0;
}
