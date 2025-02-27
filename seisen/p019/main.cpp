// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int len; cin >> len;
  int n; cin >> n;
  int m; cin >> m;
  vector<int> d(n);
  d[0] = 0;
  for (int i = 1; i < n; i++) cin >> d[i];
  sort(d.begin(), d.end());
  d.push_back(len);
  int ans = 0;
  rep(i, m) {
    int k; cin >> k;
    auto r = lower_bound(d.begin(), d.end(), k);
    auto l = r - 1;
    ans += min(*r - k, k - *l);
  }
  cout << ans << endl;
  return 0;
}
