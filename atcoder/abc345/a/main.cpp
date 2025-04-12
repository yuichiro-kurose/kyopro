// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  if (s[0] != '<' || s.back() != '>') {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 1; i < s.size() - 1; i++) {
    if (s[i] != '=') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
