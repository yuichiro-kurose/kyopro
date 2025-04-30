// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  for (int c = 1; c < s.size(); c++) {
    for (int w = c; w < s.size(); w++) {
      int p = c - 1;
      string x = "";
      while (p < s.size()) {
        x += s[p];
        p += w;
      }
      if (x == t) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
