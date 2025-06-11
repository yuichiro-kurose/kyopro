// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int d;
    cin >> d;
    for (int y = 1; y <= d; y++) {
      string s = "";
      s += to_string(i);
      s += to_string(y);
      set<char> st;
      for (char c : s) {
        st.insert(c);
      }
      if (st.size() == 1) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
