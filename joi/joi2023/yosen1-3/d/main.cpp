// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    int ans = 1;
    rep(j, n) if (i != j && a[i] > a[j]) ans++;
    cout << ans << endl;
  }
  return 0;
}
