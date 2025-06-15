// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  stack<int> stk;
  for (int i = 0; i < 100; i++) {
    stk.push(0);
  }
  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      stk.push(x);
    }
    if (type == 2) {
      cout << stk.top() << endl;
      stk.pop();
    }
  }
  return 0;
}
