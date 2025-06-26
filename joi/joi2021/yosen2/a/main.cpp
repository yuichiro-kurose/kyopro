// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a;
  cin >> n >> a;
  string s;
  cin >> s;
  set<int> st;
  st.insert(0);
  st.insert(n + 1);
  for (int i = 0; i < n; i++) {
    if (s[i] == '#') {
      st.insert(i + 1);
    }
  }
  long long ans = 0;
  bool f = true;
  while (st.size() > 2) {
    if (f) {
      auto itr = st.lower_bound(a + 1);
      ans += (*itr) - a;
      if (*itr != n + 1) {
        st.erase(itr);
      }
      a = *itr;
    } else {
      auto itr = st.lower_bound(a - 1);
      itr--;
      ans += a - (*itr);
      if (*itr != 0) {
        st.erase(itr);
      }
      a = *itr;
    }
    f = !f;
  }
  cout << ans << endl;
  return 0;
}
