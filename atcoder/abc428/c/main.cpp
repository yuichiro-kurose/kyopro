// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  string s = "$";
  stack<bool> f;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      char c;
      cin >> c;
      if (s.back() == '(' && c == ')') {
        s.pop_back();
        f.push(true);
      } else {
        s += c;
        f.push(false);
      }
    }
    if (type == 2) {
      if (f.top()) {
        s += '(';
      } else {
        s.pop_back();
      }
      f.pop();
    }
    if (s == "$") {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
