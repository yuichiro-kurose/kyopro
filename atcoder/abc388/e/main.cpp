// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = n / 2 + 1;
  while (l + 1 < r) {
    int m = (l + r) / 2;
    bool f = true;
    for (int i = 0; i < m; i++) {
      if (a[i] * 2 > a[n - m + i]) {
        f = false;
      }
    }
    if (f) {
      l = m;
    } else {
      r = m;
    }
  }
  cout << l << endl;
  return 0;
}
