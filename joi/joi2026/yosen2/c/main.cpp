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
  string ans = "";
  int cnt_j = 0, cnt_oi = 0;
  for (int l = 0; l < n;) {
    if (s[l] == 'J') {
      cnt_j++;
      l++;
    } else if (l + 1 < n && s[l] == 'O' && s[l + 1] == 'I') {
      cnt_oi++;
      l += 2;
    } else {
      for (int i = 0; i < cnt_oi; i++) {
        ans += 'O';
        ans += 'I';
      }
      cnt_oi = 0;
      for (int i = 0; i < cnt_j; i++) {
        ans += 'J';
      }
      cnt_j = 0;
      ans += s[l];
      l++;
    }
  }
  for (int i = 0; i < cnt_oi; i++) {
    ans += 'O';
    ans += 'I';
  }
  for (int i = 0; i < cnt_j; i++) {
    ans += 'J';
  }
  cout << ans << endl;
  return 0;
}
