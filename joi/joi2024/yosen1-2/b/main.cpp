// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  if (x % 7 == 2) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
