// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> t(m), h(m);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
  for (int i = 0; i < m; i++) {
    cin >> t[i] >> h[i];
    h[i]--;
    que.push(make_pair(h[i], i));
  }
  set<int> st;
  for (int i = que.top().first; i < n; i++) {
    st.insert(i);
  }
  for (int i = 0; i < m; i++) {
    st.erase(h[i]);
  }
  int ans = 0;
  while (!que.empty()) {
    auto [idx, num] = que.top();
    que.pop();
    ans += t[num];
    if (!st.empty()) {
      int nidx = *begin(st);
      que.push(make_pair(nidx, num));
      st.erase(nidx);
    }
  }
  cout << ans << endl;
  return 0;
}
