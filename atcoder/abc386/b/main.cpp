// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int cnt = 0, ans = 0;
  for (char c : s) {
    if (c == '0') {
      cnt++;
    } else {
      ans += (cnt + 1) / 2 + 1;
      cnt = 0;
    }
  }
  ans += (cnt + 1) / 2;
  cout << ans << endl;
  return 0;
}
