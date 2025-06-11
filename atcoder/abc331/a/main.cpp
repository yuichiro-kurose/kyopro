// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, d, x, y, z;
  cin >> m >> d >> x >> y >> z;
  z++;
  if (z > d) {
    y++;
    z = 1;
    if (y > m) {
      x++;
      y = 1;
    }
  }
  cout << x << ' ' << y << ' ' << z << endl;
  return 0;
}
