// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  long long p = 2, ans = 0;
  while (p <= n) {
    int mx_b = sqrtl(n / p);
    ans += (mx_b + 1) / 2;
    p *= 2;
  }
  cout << ans << endl;
  return 0;
}
