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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, n;
  cin >> m >> n;
  cout << Pow(m, n) << endl;
  return 0;
}
