// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  s += '.';
  int ans = 0;
  int cnt = 0;
  for (char c : s) {
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
      cnt++;
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
