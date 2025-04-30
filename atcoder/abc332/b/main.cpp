// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k, g, m;
  cin >> k >> g >> m;
  int a = 0, b = 0;
  while (k--) {
    if (a == g) {
      a = 0;
    } else if (b == 0) {
      b = m;
    } else {
      if (g - a > b) {
        a += b;
        b = 0;
      } else {
        b -= g - a;
        a = g;
      }
    }
  }
  cout << a << ' ' << b << endl;
  return 0;
}
