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
  int n;
  cin >> n;
  vector<long long> a(n + 1, 0);
  vector<long long> cnt(12, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    cnt[to_string(a[i]).size()]++;
    a[i] += a[i - 1];
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    long long x = a[i] - a[i - 1];
    cnt[to_string(x).size()]--;
    for (int j = 1; j <= 11; j++) {
      ans = (ans + (x * Pow(10, j) % mod) * cnt[j]) % mod;
    }
    ans = (ans + a[n] - a[i]) % mod;
  }
  cout << ans << endl;
  return 0;
}
