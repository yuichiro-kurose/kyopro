// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, q;
  cin >> n >> m >> q;
  vector<bool> all(n, false);
  vector<set<int>> st(n);
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x, y;
      cin >> x >> y;
      st[x - 1].insert(y);
    }
    if (type == 2) {
      int x;
      cin >> x;
      all[x - 1] = true;
    }
    if (type == 3) {
      int x, y;
      cin >> x >> y;
      if (all[x - 1] || st[x - 1].count(y)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
