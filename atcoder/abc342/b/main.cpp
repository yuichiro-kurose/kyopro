// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    mp[p[i]] = i;
  }
  int q;
  cin >> q;
  while (q--) {
    int a, b;
    cin >> a >> b;
    if (mp[a] < mp[b]) {
      cout << a << endl;
    } else {
      cout << b << endl;
    }
  }
  return 0;
}
