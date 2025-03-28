// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  if (s.size() < t.size()) {
    swap(s, t);
  }
  for (int i = 0; i < s.size(); i++) {
    if (i >= t.size() || s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
