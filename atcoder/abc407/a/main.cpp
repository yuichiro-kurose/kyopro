// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  int x = a / b;
  double y = (double) a / b;
  if (y - x < x + 1 - y) {
    cout << x << endl;
  } else {
    cout << x + 1 << endl;
  }
  return 0;
}
