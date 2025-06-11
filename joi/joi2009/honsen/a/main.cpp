// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  s += '$';
  bool f = false;
  int cnt = 0, ans = 0;
  for (int i = 1; i < m; i++) {
    if (s[i - 1] == 'I' && s[i] == 'O' && s[i + 1] == 'I') {
      cnt++;
      i++; 
    } else {
      ans += max(0, cnt - n + 1);
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
