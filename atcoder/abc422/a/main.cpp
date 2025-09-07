// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int x = s[0] - '0', y = s[2] - '0';
  if (y != 8) {
    cout << x << '-' << y + 1 << endl;
  } else {
    cout << x + 1 << '-' << 1 << endl;
  }
  return 0;
}
