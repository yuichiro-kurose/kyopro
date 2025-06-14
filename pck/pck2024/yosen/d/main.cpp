// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b, c, d, t;
  cin >> a >> b >> c >> d >> t;
  int ans = inf;
  int x = 0;
  long long c2 = 1;
  while (true) {
    if (a * c2 + b > t) {
      break;
    }
    int y = 0;
    long long d2 = 1;
    while (true) {
      if (a * c2 + b * d2 >= t) {
        break;
      }
      d2 *= d;
      y++;
    }
    if (a * c2 + b * d2 == t) {
      ans = min(ans, x + y);
    }
    c2 *= c;
    x++;
  }
  if (ans == inf) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
    cout << ans << endl;
  }
  return 0;
}
