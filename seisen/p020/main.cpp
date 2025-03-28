// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    int p = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    int q = lower_bound(c.begin(), c.end(), b[i] + 1) - c.begin();
    ans += (long long) p * (n - q); 
  }
  cout << ans << endl;
  return 0;
}
