// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int ans = 0;
  set<pair<int, int>> st;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    if (u == v || st.count(make_pair(u, v))) {
      ans++;
    } else {
      st.insert(make_pair(u, v));
      st.insert(make_pair(v, u));
    }
  }
  cout << ans << endl;
  return 0;
}
