// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q; cin >> q;
  stack<string> stk;
  rep(i, q) {
    string s; cin >> s;
    if (s == "READ") {
      cout << stk.top() << endl;
      stk.pop();
    }
    else stk.push(s);
  }
  return 0;
}
