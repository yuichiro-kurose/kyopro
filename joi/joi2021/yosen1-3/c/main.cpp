// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  int ans = 0;
  rep(i, n) rep(j, m) if (a[i] <= b[j]) ans++;
  cout << ans << endl;
  return 0;
}
