// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
