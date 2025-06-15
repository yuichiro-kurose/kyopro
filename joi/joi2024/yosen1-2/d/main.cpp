// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  int n;
  cin >> n;
  int ans = 0;
  while (x < n) {
    if (x % 3 == 0) {
      x++;
    } else if (x % 3 == 1) {
      x *= 2;
    } else {
      x *= 3;
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}
