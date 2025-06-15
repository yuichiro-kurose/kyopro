// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  bool f = false;
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    if (s == "login") {
      f = true;
    }
    if (s == "logout") {
      f = false;
    }
    if (s == "private" && !f) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
