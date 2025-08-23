// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> r(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> r[i] >> c[i];
  }
  sort(r.begin(), r.end());
  sort(c.begin(), c.end());
  int mid_r = (r[0] + r[n - 1] + 1) / 2, mid_c = (c[0] + c[n - 1] + 1) / 2;
  int ans = max({mid_r - r[0], r[n - 1] - mid_r, mid_c - c[0], c[n - 1] - mid_c});
  cout << ans << endl;
  return 0;
}
