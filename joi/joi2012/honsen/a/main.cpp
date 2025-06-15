// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  int cnt_j = 0, cnt_o = 0, cnt_i = 0;
  int p = 0;
  int ans = 0;
  while (p < n) {
    while (p < n && s[p] == 'J') {
      cnt_j++;
      p++;
    }
    while (p < n && s[p] == 'O') {
      cnt_o++;
      p++;
    }
    while (p < n && s[p] == 'I') {
      cnt_i++;
      p++;
    }
    if (cnt_j >= cnt_o && cnt_o <= cnt_i) {
      int level = min({cnt_j, cnt_o, cnt_i});
      ans = max(ans, level);
    }
    cnt_j = 0, cnt_o = 0, cnt_i = 0;
  }
  cout << ans << endl;
  return 0;
}
