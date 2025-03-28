// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int p = 0;
  for (int i = 0; i < q; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    x--;
    y--;
    if (t == 1) {
      swap(a[(x + p) % n], a[(y + p) % n]);
    }
    if (t == 2) {
      p = (p - 1 + n) % n;
    }
    if (t == 3) {
      cout << a[(x + p) % n] << endl;
    }
  }
  return 0;
}
