// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m;
  cin >> n >> m;
  long long ans = 0;
  long long p = 1;
  while (m > 0) {
    p *= 2;
    if (m & 1) {
      ans += ((n + 1) / p) * (p / 2);
      ans += max(0LL, ((n + 1) % p) - (p / 2));
      ans %= mod;
    }
    m >>= 1;
  }
  cout << ans << endl;  
  return 0;
}
