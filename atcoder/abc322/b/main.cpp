// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  bool f = t.substr(0, n) == s, g = t.substr(m - n, n) == s;
  if (f && g) {
    cout << 0 << endl;
  } else if (f) {
    cout << 1 << endl;
  } else if (g) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
  return 0;
}
