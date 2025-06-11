// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n);
  int m = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    m = max(m, (int) s[i].size());
  }
  reverse(s.begin(), s.end());
  vector<string> t(m);
  for (int i = 0; i < m; i++) {
    string now = "";
    for (int j = 0; j < n; j++) {
      if (s[j].size() > i) {
        now += s[j][i];
      } else {
        now += '*';
      }
    }
    t[i] = now;
  }
  for (string s : t) {
    while (s.back() == '*') {
      s.pop_back();
    }
    cout << s << endl;
  }
  return 0;
}
