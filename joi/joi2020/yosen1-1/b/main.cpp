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
  for (char c : s) {
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
