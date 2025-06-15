// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  s += '0';
  int cnt1 = 0, cnt2 = 0;
  int ans = 0;
  for (char c : s) {
    if (c == '0') {
      ans = max({ans, cnt1 - m, cnt2});
      cnt1 = 0;
      cnt2 = 0;
    }
    if (c == '1') {
      cnt1++;
    }
    if (c == '2') {
      cnt1++;
      cnt2++;
    }
  }
  cout << ans << endl;
  return 0;
}
