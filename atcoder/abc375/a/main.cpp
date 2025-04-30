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
  for (int i = 1; i < n - 1; i++) {
    if (s[i - 1] == '#' && s[i] == '.' && s[i + 1] == '#') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
