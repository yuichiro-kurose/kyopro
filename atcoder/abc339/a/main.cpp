// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t = "";
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '.') {
      break;
    }
    t += s[i];
  }
  reverse(t.begin(), t.end());
  cout << t << endl;
  return 0;
}
