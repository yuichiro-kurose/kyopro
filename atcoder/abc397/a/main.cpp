// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  double x;
  cin >> x;
  if (x >= 38.0) {
    cout << 1 << endl;
  } else if (x >= 37.5) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
  return 0;
}
