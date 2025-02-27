// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s; cin >> s;
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    string t; cin >> t;
    t += t;
    rep(j, t.size() - s.size() + 1) {
      bool f = true;
      rep(k, s.size()) if (t[j + k] != s[k]) f = false;
      if (f) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
