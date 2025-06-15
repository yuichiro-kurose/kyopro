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
    a[i] = i;
  }
  int pos = 0;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int p, x;
      cin >> p >> x;
      p--;
      x--;
      a[(pos + p) % n] = x;
    }
    if (type == 2) {
      int p;
      cin >> p;
      p--;
      cout << a[(pos + p) % n] + 1 << endl;
    }
    if (type == 3) {
      int k;
      cin >> k;
      pos = (pos + k) % n;
    }
  }
  return 0;
}
