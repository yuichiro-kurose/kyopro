// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x, y;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<Point> a(n);
  for (int i = 0; i < n; i++) {
    a[i].x = i + 1;
    a[i].y = 0;
  }
  int top = 0;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      char c;
      cin >> c;
      int ntop = (top - 1 + n) % n;
      a[ntop] = a[top];
      if (c == 'R') {
        a[ntop].x++;
      }
      if (c == 'L') {
        a[ntop].x--;
      }
      if (c == 'U') {
        a[ntop].y++;
      }
      if (c == 'D') {
        a[ntop].y--;
      }
      top = ntop;
    }
    if (type == 2) {
      int p;
      cin >> p;
      p--;
      int idx = (top + p) % n;
      cout << a[idx].x << ' ' << a[idx].y << endl;
    }
  }
  return 0;
}
