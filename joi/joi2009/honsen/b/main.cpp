// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int len, n, m;
  cin >> len >> n >> m;
  vector<int> d(n);
  d[0] = 0;
  for (int i = 1; i < n; i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  d.push_back(len);
  int ans = 0;
  for (int i = 0; i < m; i++) {
    int k; cin >> k;
    auto r = lower_bound(d.begin(), d.end(), k);
    auto l = r - 1;
    ans += min(*r - k, k - *l);
  }
  cout << ans << endl;
  return 0;
}
