// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    b[i] = a[n - m + i];
  }
  for (int i = 0; i < n - m; i++) {
    b[i] += a[n - m - i - 1];
  }
  long long ans = 0;
  for (int i = 0; i < m; i++) {
    ans += (long long) b[i] * b[i];
  }
  cout << ans << endl;
  return 0;
}
