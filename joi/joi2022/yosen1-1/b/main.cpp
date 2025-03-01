// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  int y;
  cin >> y;
  int z;
  cin >> z;
  if (x + y <= z) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
