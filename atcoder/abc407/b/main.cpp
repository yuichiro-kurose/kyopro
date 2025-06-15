// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y;
  cin >> x >> y;
  int cnt = 0;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i + j >= x || abs(i - j) >= y) {
        cnt++;
      }
    }
  }
  cout << fixed << setprecision(9) << (double) cnt / 36 << endl;
  return 0;
}
