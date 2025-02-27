// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k; cin >> k;
  vector<int> r(k), c(k);
  rep(i, k) cin >> r[i] >> c[i];
  vector<int> p(8);
  rep(i, 8) p[i] = i;
  do {
    bool f = true;
    rep(i, k) if (p[r[i]] != c[i]) f = false;
    rep(i, 8) {
      {
        int x = i, y = p[i];
        while (true) {
          x++; y++;
          if (x >= 8 || y >= 8) break;
          if (p[x] == y) f = false;
        }
      }
      {
        int x = i, y = p[i];
        while (true) {
          x++; y--;
          if (x >= 8 || y < 0) break;
          if (p[x] == y) f = false;
        }
      }
    }
    if (f) break;
  } while (next_permutation(p.begin(), p.end()));
  rep(i, 8) {
    rep(j, 8) {
      if (p[i] == j) cout << 'Q';
      else cout << '.';
    }
    cout << endl;
  }
  return 0;
}
