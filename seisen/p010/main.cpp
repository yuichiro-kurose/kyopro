// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  unordered_set<int> st;
  for (int i = 0; i < 1 << n; i++) {
    int now = 0;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        now += a[j];
      }
    }
    st.insert(now);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int m;
    cin >> m;
    if (st.count(m)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}
