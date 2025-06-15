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
  auto f = [&](auto f, string x) -> void {
    if (x.size() == 3) {
      int p = 0;
      for (int i = 0; i < n; i++) {
        if (s[i] == x[p]) {
          p++;
        }
        if (p == 3) {
          ans++;
          break;
        }
      }
    } else {
      for (char c = '0'; c <= '9'; c++) {
        x += c;
        f(f, x);
        x.pop_back();
      }
    }
  };
  f(f, "");
  cout << ans << endl;
  return 0;
}
