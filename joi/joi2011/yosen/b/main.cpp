// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string t;
    cin >> t;
    t += t;
    for (int j = 0; j < t.size() - s.size() + 1; j++) {
      bool f = true;
      for (int k = 0; k < s.size(); k++) {
        if (t[j + k] != s[k]) {
          f = false;
        }
      }
      if (f) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
