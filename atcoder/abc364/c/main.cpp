// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long x, y;
  cin >> n >> x >> y;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  long long p = 0, q = 0;
  for (int i = 0; i < n; i++) {
    p += a[i];
    q += b[i];
    if (p > x || q > y) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
