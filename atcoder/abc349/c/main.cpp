// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  for (char& c : t) {
    c = tolower(c);
  }
  int p = 0;
  for (char c : s) {
    if (c == t[p]) {
      p++;
    }
  }
  if (p == 3 || p == 2 && t.back() == 'x') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
