// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> b(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (!mp.count(a)) {
      b[i] = -1;
    } else {
      b[i] = mp[a] + 1;
    }
    mp[a] = i;
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << b[i];
  }
  cout << endl;
  return 0;
}
