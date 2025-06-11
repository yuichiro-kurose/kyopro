// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> b(n), w(m);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> w[i];
  }
  sort(b.rbegin(), b.rend());
  sort(w.rbegin(), w.rend());
  long long ans = 0;
  int p = 0, q = 0;
  while (p < n && b[p] > 0) {
    ans += b[p];
    p++;
  }
  while (p > q && q < m && w[q] > 0) {
    ans += w[q];
    q++;
  }
  while (p < n && q < m && b[p] + w[q] > 0) {
    ans += b[p] + w[q];
    p++;
    q++;
  }
  cout << ans << endl;
  return 0;
}
