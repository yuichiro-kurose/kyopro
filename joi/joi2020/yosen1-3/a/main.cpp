// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, l, r;
  cin >> x >> l >> r;
  if (x < l) {
    cout << l << endl;
  } else if (r < x) {
    cout << r << endl;
  } else {
    cout << x << endl;
  }
  return 0;
}
