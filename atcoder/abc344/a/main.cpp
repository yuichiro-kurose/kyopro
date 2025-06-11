// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  bool f = true;
  for (char c : s) {
    if (c == '|') {
      f = !f;
      continue;
    }
    if (f) {
      cout << c;
    }
  }
  cout << endl;
  return 0;
}
