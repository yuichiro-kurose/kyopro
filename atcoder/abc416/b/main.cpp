// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t = "";
  bool f = true;
  for (char c : s) {
    if (c == '.') {
      if (f) {
        t += 'o';
        f = false;
      } else {
        t += '.';
      }
    } else {
      t += '#';
      f = true;
    }
  }
  cout << t << endl;
  return 0;
}
