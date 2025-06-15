// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  while (true) {
    set<int> st;
    for (int x : a) {
      st.insert(x);
    }
    if (st.size() == m) {
      a.pop_back();
      ans++;
    } else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
