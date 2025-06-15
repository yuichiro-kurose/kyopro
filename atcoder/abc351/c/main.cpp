// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  queue<int> que;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    que.push(a);
  }
  stack<int> stk;
  stk.push(que.front());
  que.pop();
  while (!que.empty()) {
    int x = que.front();
    que.pop();
    while (!stk.empty() && stk.top() == x) {
      x++;
      stk.pop();
    }
    stk.push(x);
  }
  cout << stk.size() << endl;
  return 0;
}
