// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  set<int> st;
  for (int u : g[0]) {
    st.insert(u);
    for (int v : g[u]) {
      if (v != 0) {
        st.insert(v);
      }
    }
  }
  cout << st.size() << endl;
  return 0;
}
