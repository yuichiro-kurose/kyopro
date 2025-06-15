// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  for (char c : s) {
    if (c == 'R') {
      cout << "Yes" << endl;
      break;
    }
    if (c == 'M') {
      cout << "No" << endl;
      break;
    }
  }
  return 0;
}
