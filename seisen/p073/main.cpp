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

long long C(int n, int r) {
  long long a = 1, b = 1;
  for (int i = 1; i <= n; i++) {
    a = (a * i) % mod;
  }
  for (int i = 1; i <= r; i++) {
    b = (b * i) % mod;
  }
  for (int i = 1; i <= n - r; i++) {
    b = (b * i) % mod;
  }
  return a * Pow(b, mod - 2) % mod;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y;
  cin >> x >> y;
  if ((x + y) % 3 != 0 || x * 2 < y || y * 2 < x) {
    cout << 0 << endl;
    return 0;
  }
  int n = (x + y) / 3, r = (y * 2 - x) / 3;
  cout << C(n, r) << endl;
  return 0;
}
