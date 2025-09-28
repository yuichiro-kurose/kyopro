// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] %= t;
  }
  sort(a.begin(), a.end());
  int x = 0;
  for (int i = 0; i < n - 1; i++) {
    x = max(x, a[i + 1] - a[i]);
  }
  x = max(x, (a[0] + t) - a[n - 1]); 
  int ans = (t - x + 1) / 2;
  cout << ans << endl;
  return 0;
}
