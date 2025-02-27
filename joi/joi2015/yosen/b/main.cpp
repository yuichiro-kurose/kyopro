// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  int m; cin >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  vector<int> ans(n, 0);
  rep(i, m) rep(j, n) {
    int b; cin >> b;
    if (b == a[i]) ans[j]++;
    else ans[a[i] - 1]++;
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}
