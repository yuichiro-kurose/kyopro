// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int ans = 0;
  if (s[0] == 'o') {
    ans++;
  }
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      ans++;
    }
  }
  if (s.back() == 'i') {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
