// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int q;
  cin >> q;
  map<char, char> mp;
  for (int i = 0; i < 26; i++) {
    mp['a' + i] = 'a' + i;
  }
  while (q--) {
    char c, d;
    cin >> c >> d;
    for (auto& p : mp) {
      if (p.second == c) {
        p.second = d;
      }
    }
  }
  for (char& c : s) {
    c = mp[c];
  }
  cout << s << endl;
  return 0;
}
