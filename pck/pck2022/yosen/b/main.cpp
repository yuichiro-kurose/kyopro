// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d1, m1, d2, m2;
  cin >> d1 >> m1 >> d2 >> m2;
  int a = d1 * 10 + m1, b = d2 * 10 + m2;
  if (a >= 375) {
    cout << 2 << endl;
  } else if (a >= b) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
