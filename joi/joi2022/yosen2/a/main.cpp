// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  stack<string> stk;
  for (int i = 0; i < q; i++) {
    string s;
    cin >> s;
    if (s == "READ") {
      cout << stk.top() << endl;
      stk.pop();
    } else {
      stk.push(s);
    }
  }
  return 0;
}
