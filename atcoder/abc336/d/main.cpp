// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 2);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int> dl(n + 2, 0), dr(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    dl[i] = min(dl[i - 1] + 1, a[i]);
  }
  for (int i = n; i >= 1; i--) {
    dr[i] = min(dr[i + 1] + 1, a[i]);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = max(ans, min(dl[i], dr[i]));
  }
  cout << ans << endl;
  return 0;
}
