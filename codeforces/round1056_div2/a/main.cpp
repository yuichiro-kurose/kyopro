// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    int a = n, b = 0;
    while (a > 1 || b > 1) {
      int tmp = 0;
      if (a > 1) {
        ans += a / 2;
        tmp = a / 2;
        a -= a / 2;
      }
      if (b > 1) {
        ans += b / 2;
        b -= b / 2;
      }
      b += tmp;
    }
    ans++;
    cout << ans << endl;
  }
  return 0;
}
