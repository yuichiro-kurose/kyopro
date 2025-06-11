// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, m, l, r;
  cin >> a >> m >> l >> r;
  l -= a;
  r -= a;
  long long x = inf / m;
  l += x * m;
  r += x * m;
  long long ans = r / m - (l - 1) / m;
  cout << ans << endl;
  return 0;
}
