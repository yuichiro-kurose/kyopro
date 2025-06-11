// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  stack<int> stk;
  vector<int> ans(n, 0);
  for (int i = n - 2; i >= 0; i--) {
    while (!stk.empty() && h[i + 1] > h[stk.top()]) {
      stk.pop();
    }
    stk.push(i + 1);
    ans[i] = stk.size();
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
