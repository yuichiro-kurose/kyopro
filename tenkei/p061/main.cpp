// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  vector<int> a, b;
  while (q--) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      a.push_back(x);
    }
    if (t == 2) {
      b.push_back(x);
    }
    if (t == 3) {
      if (x <= a.size()) {
        cout << a[a.size() - x] << endl;
      } else {
        cout << b[x - a.size() - 1] << endl;
      }
    }
  }
  return 0;
}
