// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int ans = 0, p;
  for (int i = 0; i < 26; i++) {
    char c = 'A' + i;
    for (int j = 0; j < 26; j++) {
      if (s[j] == c) {
        if (i > 0) {
          ans += abs(p - j);
        }
        p = j;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
