// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> st;
  for (int i = 0; i < m; i++) {
    int r, c;
    cin >> r >> c;
    bool f = true;
    for (int x = 0; x < 2; x++) {
      for (int y = 0; y < 2; y++) {
        if (st.count(make_pair(r + x, c + y))) {
          f = false;
        }
      }
    }
    if (f) {
      for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
          st.insert(make_pair(r + x, c + y));
        }
      }
    }
  }
  cout << st.size() / 4 << endl;
  return 0;
}
