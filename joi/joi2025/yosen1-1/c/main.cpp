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
  for (char& c : s) {
    if (c == 'J') {
      c = 'O';
    } else if (c == 'O') {
      c = 'I';
    } else {
      c = 'J';
    }
  }
  cout << s << endl;
  return 0;
}
