// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r, c;
  cin >> n >> r >> c;
  string s;
  cin >> s;
  pair<int, int> o = make_pair(0, 0);
  set<pair<int, int>> st;
  st.insert(make_pair(0, 0));
  for (char ch : s) {
    if (ch == 'N') {
      o.first++;
    }
    if (ch == 'W') {
      o.second++;
    }
    if (ch == 'S') {
      o.first--;
    }
    if (ch == 'E') {
      o.second--;
    }
    st.insert(make_pair(o.first, o.second));
    if (st.count(make_pair(o.first + r, o.second + c))) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << endl;
  return 0;
}
