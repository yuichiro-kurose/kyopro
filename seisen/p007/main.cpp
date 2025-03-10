// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  set<pair<int, int>> st;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    st.insert(make_pair(x, y));
  }
  int ans = 0;
  for (auto p1 : st) {
    for (auto p2 : st) {
      if (p1 == p2) {
        continue;
      }
      pair<int, int> p3, p4;
      p3.first = p1.first + (p2.second - p1.second);
      p3.second = p1.second + (p1.first - p2.first);
      p4.first = p2.first + (p2.second - p1.second);
      p4.second = p2.second + (p1.first - p2.first);
      if (st.count(p3) && st.count(p4)) {
        ans = max(ans, (p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
      }
    }
  }
  cout << ans << endl;
  return 0;
}
