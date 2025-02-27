// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  string s; cin >> s;
  rep(i, n - 1) {
    if (s[i] == s[i + 1]) {
      s[i] = toupper(s[i]);
      s[i + 1] = toupper(s[i + 1]);
    }
  }
  cout << s << endl;
  return 0;
}
