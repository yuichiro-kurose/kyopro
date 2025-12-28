// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  vector<long long> sa(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0) {
      sa[i] = sa[i - 1];
    }
    sa[i] += a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  long long vb = b[1], vc = 0;
  for (int i = 2; i < n; i++) {
    vc += c[i];
  }
  int p = 0;
  long long ans = sa[p] + vb + vc;
  for (int i = 2; i < n - 1; i++) {
    if (sa[i - 1] >= sa[p] + vb) {
      p = i - 1;
      vb = 0;
    }
    vb += b[i];
    vc -= c[i];
    ans = max(ans, sa[p] + vb + vc);
  }
  cout << ans << endl;
  return 0;
}
