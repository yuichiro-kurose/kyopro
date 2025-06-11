// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long day = 0;
  queue<long long> que;
  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      que.push(day);
    }
    if (type == 2) {
      int t;
      cin >> t;
      day += t;
    }
    if (type == 3) {
      int h;
      cin >> h;
      int ans = 0;
      while (!que.empty() && day - que.front() >= h) {
        que.pop();
        ans++;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
