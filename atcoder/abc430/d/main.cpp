// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  set<int> st;
  map<int, int> mp;
  st.insert(0);
  mp[0] = 0;
  int ans = 0;
  vector<int> d(n + 1, inf), nd(n + 1, inf);
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    auto itr = st.lower_bound(x);
    itr--;
    if ((*itr) == (*rbegin(st))) {
      nd[i] = x - (*itr);
      nd[mp[(*itr)]] = min(d[mp[(*itr)]], x - (*itr));
      if (i == 1) {
        ans += nd[i] + nd[mp[(*itr)]];
      } else {
        ans += nd[i] + (nd[mp[(*itr)]] - d[mp[(*itr)]]);
      }
      d[i] = nd[i];
      d[mp[(*itr)]] = nd[mp[(*itr)]];
    } else {
      auto itr2 = itr;
      itr2++;
      nd[i] = min(x - (*itr), (*itr2) - x);
      nd[mp[(*itr)]] = min(d[mp[(*itr)]], x - (*itr));
      nd[mp[(*itr2)]] = min(d[mp[(*itr2)]], (*itr2) - x);
      ans += nd[i] + (nd[mp[(*itr)]] - d[mp[(*itr)]]) + (nd[mp[(*itr2)]] - d[mp[(*itr2)]]);
      d[i] = nd[i];
      d[mp[(*itr)]] = nd[mp[(*itr)]];
      d[mp[(*itr2)]] = nd[mp[(*itr2)]];
    }
    mp[x] = i;
    st.insert(x);
    cout << ans << endl;
  }
  return 0;
}
