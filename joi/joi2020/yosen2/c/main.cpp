// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 1;
  set<int> st;
  st.insert(n);
  for (int i = n - 1; i >= 1; i--) {
    string s = to_string(i);
    int d = 0;
    for (char c : s) {
      d += c - '0';
    }
    if (st.count(i + d)) {
      ans++;
      st.insert(i);
    }
  }
  cout << ans << endl;
  return 0;
}
