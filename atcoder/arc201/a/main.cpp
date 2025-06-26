// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long p = 0, q = 0, r = 0;;
    for (int i = 0; i < n; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      p += min(a, b);
      q += min(c, b - min(a, b));
      r += min(c, b);
    }
    cout << min({p, r, (p + q) / 2}) << endl;
  }
  return 0;
}
