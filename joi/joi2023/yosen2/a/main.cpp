// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  int mn = inf, mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << max(abs(mn - a[i]), abs(mx - a[i])) << endl;
  }
  return 0;
}
