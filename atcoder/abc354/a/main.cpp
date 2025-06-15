// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h;
  cin >> h;
  int now = 0, x = 1, ans = 0;
  while (now <= h) {
    ans++;
    now += x;
    x *= 2;
  }
  cout << ans << endl;
  return 0;
}
