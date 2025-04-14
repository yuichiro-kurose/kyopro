// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  int siz = max(n, k);
  vector<long long> a(siz + 1, 1);
  a[k] = k;
  for (int i = k + 1; i <= siz; i++) {
    a[i] = (a[i - 1] * 2 - a[i - 1 - k] + mod) % mod;
  }
  cout << a[n] << endl;
  return 0;
}
