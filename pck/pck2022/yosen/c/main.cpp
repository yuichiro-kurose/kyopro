// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int win = 0, lose = 0;
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    if (y == (x + 1) % 3) {
      win++;
    }
    if (x == (y + 1) % 3) {
      lose++;
    }
  }
  if (win < lose) {
    cout << 1 << endl;
  }
  if (win > lose) {
    cout << 0 << endl;
  }
  if (win == lose) {
    cout << -1 << endl;
  }
  return 0;
}
