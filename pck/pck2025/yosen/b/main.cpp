// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, c, r;
  cin >> h >> c >> r;
  string ans;
  if (h < c - r) {
    ans = "up";
  } else if (h <= c + r) {
    ans = "side";
  } else {
    ans = "down";
  }
  cout << ans << endl;
  return 0;
}
