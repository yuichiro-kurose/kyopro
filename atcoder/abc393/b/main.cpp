// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int r = 1; i + r + r < s.size(); r++) {
      if (s[i] == 'A' && s[i + r] == 'B' && s[i + r + r] == 'C') {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
