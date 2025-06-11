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
  s += '$';
  int ans = 0;
  for (int i = 0; i < 26; i++) {
    int mx = 0, now = 0;
    for (char c : s) {
      if (c == 'a' + i) {
        now++;
      } else {
        mx = max(mx, now);
        now = 0;
      }
    }
    ans += mx;
  }
  cout << ans << endl;
  return 0;
}
