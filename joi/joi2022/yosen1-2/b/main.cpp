// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  int x = (a + b) % 12;
  if (x == 0) {
    cout << 12 << endl;
  } else {
    cout << x << endl;
  }
  return 0;
}
