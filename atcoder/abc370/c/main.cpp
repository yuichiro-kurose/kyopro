// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  vector<string> x;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] > t[i]) {
      s[i] = t[i];
      x.push_back(s);
    }
  }
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] < t[i]) {
      s[i] = t[i];
      x.push_back(s);
    }
  }
  cout << x.size() << endl;
  for (string s : x) {
    cout << s << endl;
  }
  return 0;
}
