// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  long long a, b, c;
  cin >> a >> b >> c;
  long long ans = inf;
  for (int i = 0; i <= 9999; i++) {
    for (int j = 0; j <= 9999 - i; j++) {
      long long x = n - a * i - b * j;
      if (x >= 0 && x % c == 0) {
        ans = min(ans, i + j + x / c);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
