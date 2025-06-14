// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> d(m + 1, 1);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    d[r] = max(l + 1, d[r]);
  }
  long long ans = 0;
  for (int i = 1; i <= m; i++) {
    d[i] = max(d[i], d[i - 1]);
    ans += i - d[i] + 1;
  }
  cout << ans << endl;
  return 0;
}
