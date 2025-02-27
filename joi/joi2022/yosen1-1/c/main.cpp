// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  set<char> st;
  rep(i, n) {
    char c; cin >> c;
    st.insert(c);
  }
  if (st.size() >= 3) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
