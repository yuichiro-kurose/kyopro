// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (i != s.size() / 2) {
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}
