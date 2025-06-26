// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

long long Pow(long long a, long long b) {
  long long ret = 1;
  while (b > 0) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    b >>= 1;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  long long k = to_string(n).size();
  long long a = (n % mod) * (Pow(Pow(10, n), k) - 1) % mod;
  long long b = Pow(10, k) - 1;
  long long ans = a * Pow(b, mod - 2) % mod;
  cout << ans << endl;
  return 0;
}
