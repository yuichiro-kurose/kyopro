// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, h;
    cin >> n >> h;
    vector<int> t(n), l(n), u(n);
    for (int i = 0; i < n; i++) {
      cin >> t[i] >> l[i] >> u[i];
    }
    bool f = true;
    for (int i = n - 2; i >= 0; i--) {
      int l_lim = l[i + 1] - (t[i + 1] - t[i]);
      int u_lim = u[i + 1] + (t[i + 1] - t[i]);
      l[i] = max(l[i], l_lim);
      u[i] = min(u[i], u_lim);
      if (l[i] > u[i]) {
        f = false;
        break;
      }
    }
    if (h < l[0] && l[0] - h > t[0] || h > u[0] && h - u[0] > t[0]) {
      f = false;
    }
    if (f) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
