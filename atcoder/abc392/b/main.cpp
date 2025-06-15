// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  set<int> st;
  for (int i = 1; i <= n; i++) {
    st.insert(i);
  }
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    st.erase(a);
  }
  cout << st.size() << endl;
  for (int ans : st) {
    cout << ans << ' ';
  }
  cout << endl;
  return 0;
}
