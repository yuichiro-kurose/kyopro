// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  long long ans = 0;
  for (long long x = 1; x * x * x <= n; x++) {
    string s = to_string(x * x * x);
    bool f = true;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != s[s.size() - 1 - i]) {
        f = false;
      }
    }
    if (f) {
      ans = x * x * x;
    }
  }
  cout << ans << endl;
  return 0;
}
