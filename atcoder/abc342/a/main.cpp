// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  char x = s[0], y = s[1], z = s[2];
  char a;
  if (x == y) {
    a = x;
  }
  if (y == z) {
    a = y;
  }
  if (z == x) {
    a = z;
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != a) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}
