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
  for (int i = 0; i < n - 1; i += 2) {
    if (s[i] != 'I') {
      ans++;
    }
    if (s[i + 1] != 'O') {
      ans++;
    }
  }
  if ((n & 1) && s[n - 1] != 'I') {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
