// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  sx -= (sx + sy) & 1;
  tx -= (tx + ty) & 1;
  tx -= sx;
  ty -= sy;
  tx = abs(tx);
  ty = abs(ty);
  cout << ty + max((long long) 0, (tx - ty) / 2) << endl;
  return 0;
}
