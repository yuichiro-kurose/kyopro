// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  int ans = d;
  for (char c : s) {
    if (c == '.') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
