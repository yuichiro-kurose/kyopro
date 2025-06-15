// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x = 0, y = 0;
  for (int i = 0; i < 9; i++) {
    int a;
    cin >> a;
    x += a;
  }
  for (int i = 0; i < 8; i++) {
    int b;
    cin >> b;
    y += b;
  }
  cout << x - y + 1 << endl;
  return 0;
}
