// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string d;
  cin >> d;
  string ans = "";
  for (char c : d) {
    if (c == 'N') {
      ans += 'S';
    }
    if (c == 'E') {
      ans += 'W';
    }
    if (c == 'W') {
      ans += 'E';
    }
    if (c == 'S') {
      ans += 'N';
    }
  }
  cout << ans << endl;
  return 0;
}
