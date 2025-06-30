// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  for (int i = 1; i < s.size(); i++) {
    if (isupper(s[i])) {
      bool f = false;
      for (int j = 0; j < t.size(); j++) {
        if (t[j] == s[i - 1]) {
          f = true;
        }
      }
      if (!f) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
