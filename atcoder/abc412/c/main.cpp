// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> s(n);
    set<int> st;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
      cin >> s[i];
      if (0 < i && i < n - 1) {
        st.insert(s[i]);
        cnt[s[i]]++;
      }
    }
    st.insert(inf);
    st.insert(-inf);
    int now = s[0], ans = 2;
    while (now * 2 < s[n - 1]) {
      auto itr = st.upper_bound(now * 2);
      itr--;
      if (*itr == -inf) {
        ans = -1;
        break;
      }
      now = *itr;
      cnt[*itr]--;
      if (cnt[*itr] == 0) {
        cnt.erase(*itr);
        st.erase(itr);
      }
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
