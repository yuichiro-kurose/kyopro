// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> s(n + 1, 0), t(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      s[i] = 1;
    } else {
      t[i] = 1;
    }
    s[i] += s[i - 1];
    t[i] += t[i - 1];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    int x = s[r] - s[l - 1], y = t[r] - t[l - 1];
    if (x < y) {
      cout << "lose" << endl;
    }
    if (x == y) {
      cout << "draw" << endl;
    }
    if (x > y) {
      cout << "win" << endl;
    }
  }
  return 0;
}
