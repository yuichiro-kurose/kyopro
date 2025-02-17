// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<bool> f(n, true);
  rep(i, m) {
    int b; cin >> b;
    rep(j, n) if (b == a[j]) f[j] = false;
  }
  int ans = 0;
  rep(i, n) if (!f[i]) ans++;
  cout << ans << endl;
  return 0;
}
