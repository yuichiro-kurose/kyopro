// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long r;
  cin >> r;
  long long ans = 0;
  for (long long x = 2; x <= r; x++) {
    int left = 0, right = 1e9;
    while (left + 1 < right) {
      long long y = (left + right) / 2;
      if ((x - 0.5) * (x - 0.5) + (y - 0.5) * (y - 0.5) <= r * r) {
        left = y;
      } else {
        right = y;
      }
    }
    ans += left - 1;
  }
  ans *= 4;
  ans += (r - 1) * 4 + 1;
  cout << ans << endl;
  return 0;
}
