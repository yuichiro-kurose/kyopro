// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m, p;
  cin >> n >> m >> p;
  vector<long long> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.begin(), b.end());
  long long ans = 0, sum = 0;
  int r = 0;
  for (int l = 0; l < n; l++) {
    while (r < m && a[l] + b[r] < p) {
      sum += b[r];
      r++;
    }
    ans += a[l] * r + sum + p * (m - r);
  }
  cout << ans << endl;
  return 0;
}
