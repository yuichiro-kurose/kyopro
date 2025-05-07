// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  if (s.size() > t.size()) {
    swap(s, t);
  }
  string x = s;
  for (int i = 0; i < t.size(); i++) {
    x += '$';
  }
  string y = "";
  for (int i = 0; i < s.size(); i++) {
    y += '#';
  }
  y += t;
  int ans = 0;
  for (int l = 0; l < x.size(); l++) {
    int now = 0, cnt = 0;
    for (int i = 0; i < x.size(); i++) {
      if (x[(l + i) % x.size()] == y[i]) {
        cnt++;
      } else {
        now = max(now, cnt);
        cnt = 0;
      }
    }
    now = max(now, cnt);
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}
