// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  vector<int> a;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    if (type == 2) {
      int k;
      cin >> k;
      cout << a[a.size() - k] << endl;
    }
  }
  return 0;
}
