// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  while (q--) {
    int b, k;
    cin >> b >> k;
    auto f = [&](int r) -> bool {
      int x = upper_bound(a.begin(), a.end(), b + r) - a.begin();
      int y = lower_bound(a.begin(), a.end(), b - r) - a.begin();
      if (x - y >= k) {
        return true;
      }
      return false;
    };
    int lb = -1, ub = inf;
    while (ub - lb > 1) {
      int m = (lb + ub) / 2;
      if (f(m)) {
        ub = m;
      } else {
        lb = m;
      }
    }
    cout << ub << endl;
  }
  return 0;
}
