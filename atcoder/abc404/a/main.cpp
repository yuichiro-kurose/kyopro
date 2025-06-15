// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<bool> f(26, true);
  string s;
  cin >> s;
  for (char c : s) {
    f[c - 'a'] = false;
  }
  for (int i = 0; i < 26; i++) {
    if (f[i]) {
      cout << (char) ('a' + i) << endl;
      break;
    }
  }
  return 0;
}
