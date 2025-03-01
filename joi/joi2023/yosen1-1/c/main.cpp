// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0, x = 1;
  for (char c : s) {
    if (c == 'L' && x != 1) {
      x--;
    }
    if (c == 'R' && x != 3) {
      x++;
    }
    if (x == 3) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
