// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for (int i = 0; i < n; i++) {
    pq.push(make_pair(i + 1, 1));
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    while (pq.top().first <= x) {
      ans += pq.top().second;
      pq.pop();
    }
    cout << ans << endl;
    pq.push(make_pair(y, ans));
  }
  return 0;
}
