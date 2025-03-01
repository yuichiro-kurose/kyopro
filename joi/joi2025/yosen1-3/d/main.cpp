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
  for (int i = 1; i <= s.size() / 2; i++) {
    string t = s.substr(0, i);
    string u = "";
    for (int j = 0; j < s.size(); j += i) {
      u += t;
    }
    if (u == s) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
