// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  map<int, int> mp;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      mp[x]++;
    }
    if (type == 2) {
      int x;
      cin >> x;
      mp[x]--;
      if (mp[x] == 0) {
        mp.erase(x);
      }
    }
    if (type == 3) {
      cout << mp.size() << endl;
    }
  }
  return 0;
}
