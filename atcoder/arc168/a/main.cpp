// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n >> s;
  s += '$';
  long long ans = 0;
  int len = 0;
  for (char c : s) {
    if (c == '>') {
      len++;
    } else {
      ans += (long long) (len + 1) * len / 2;
      len = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
