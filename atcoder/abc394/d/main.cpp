// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  stack<char> stk;
  bool f = true;
  for (char c : s) {
    if (c == '(' || c == '[' || c == '<') {
      stk.push(c);
    } else if (stk.empty()) {
      f = false;
    } else {
      char x = stk.top();
      stk.pop();
      if (x == '(' && c != ')') {
        f = false;
      }
      if (x == '[' && c != ']') {
        f = false;
      }
      if (x == '<' && c != '>') {
        f = false;
      }
    }
  }
  if (f && stk.empty()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
