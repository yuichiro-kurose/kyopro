// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull Pow(ull a, ull b) {
  ull ret = 1;
  for (int i = 0; i < b; i++) {
    ret *= a;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<ull> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<map<int, int>> cnt(11);
  for (int i = 0; i < n; i++) {
    for (int d = 1; d <= 10; d++) {
      ull x = a[i];
      cnt[d][(x * Pow(10, d)) % m]++;
    }
  }
  ull ans = 0;
  for (int i = 0; i < n; i++) {
    ull y = a[i];
    int d = 1;
    while (y / Pow(10, d) > 0) {
      d++;
    }
    ans += cnt[d][(m - (y % m)) % m];
  }
  cout << ans << endl;
  return 0;
}
