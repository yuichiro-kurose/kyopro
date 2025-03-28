// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  s += 'X';
  int ans = 0, cnt = 0;
  for (char c : s) {
    if (c == 'O') {
      cnt++;
    } else {
      ans += cnt / k;
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
