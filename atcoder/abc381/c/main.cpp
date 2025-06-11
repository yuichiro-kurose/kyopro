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
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != '/') {
      continue;
    }
    int l = i, r = i;
    while (l - 1 >= 0 && r + 1 < n && s[l - 1] == '1' && s[r + 1] == '2') {
      l--;
      r++;
    }
    ans = max(ans, r - l + 1);
  }
  cout << ans << endl;
  return 0;
}
