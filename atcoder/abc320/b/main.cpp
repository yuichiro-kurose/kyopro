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
    for (int j = i; j < s.size(); j++) {
      bool f = true;
      for (int k = 0; k < j - i + 1; k++) {
        if (s[i + k] != s[j - k]) {
          f = false;
        }
      }
      if (f) {
        ans = max(ans, j - i + 1);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
