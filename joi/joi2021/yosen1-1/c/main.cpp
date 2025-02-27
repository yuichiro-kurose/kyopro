// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  set<int> ans;
  rep(i, m) {
    int b; cin >> b;
    bool f = false;
    rep(j, n) if (a[j] == b) f = true;
    if (f) ans.insert(b);
  }
  for (int x : ans) cout << x << endl;
  return 0;
}
