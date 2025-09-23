// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n), d(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {;
    d[i] = a[i] - b[i];
    ans += d[i];
  }
  sort(d.begin(), d.end());
  for (int i = 0; i < k; i++) {
    ans -= d[i];
  }
  cout << ans << endl;
  return 0;
}
