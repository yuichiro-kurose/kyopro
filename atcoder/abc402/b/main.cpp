// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  queue<int> que;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      que.push(x);
    }
    if (type == 2) {
      cout << que.front() << endl;
      que.pop();
    }
  }
  return 0;
}
