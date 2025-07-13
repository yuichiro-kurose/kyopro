// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

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

long long Div(long long a, long long b) {
  return (a * Pow(b, mod - 2)) % mod;;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<unsigned long long> p10(20);
  p10[0] = 1;
  for (int i = 1; i < 20; i++) {
    p10[i] = p10[i - 1] * 10;
  }
  auto f = [&](unsigned long long x) -> long long {
    long long ret = 0;
    for (int n = 1; p10[n - 1] <= x; n++) {
      long long l = p10[n - 1] % mod, r = min(p10[n] - 1, x) % mod;
      ret = (ret + (n * Div((l + r) * (r - l + 1) % mod, 2) % mod)) % mod;
    }
    return ret;
  };
  long long l, r;
  cin >> l >> r;
  cout << (f(r) - f(l - 1) + mod) % mod << endl;
  return 0;
}
