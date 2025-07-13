// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  queue<pair<int, int>> que;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int c, x;
      cin >> c >> x;
      que.push(make_pair(c, x));
    }
    if (type == 2) {
      int k;
      cin >> k;
      long long ans = 0;
      while (!que.empty()) {
        auto p = que.front();
        if (k < p.first) {
          que.front().first -= k;
          ans += (long long) k * p.second;
          break;
        }
        k -= p.first;
        ans += (long long) p.first * p.second;
        que.pop();
      }
      cout << ans << endl;
    }
  }
  return 0;
}
