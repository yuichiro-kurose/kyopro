// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long d;
  cin >> d;
  long long ans = inf;
  for (long long x = 0; x * x <= d; x++) {
    long long y = sqrt(d - x * x);
    ans = min({ans, abs(x * x + y * y - d), abs(x * x + (y + 1) * (y + 1) - d)});
  }
  cout << ans << endl;
  return 0;
}
