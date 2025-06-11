// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s = "";
  for (int i = 0; i <= n; i++) {
    bool f = true;
    for (int j = 1; j <= 9; j++) {
      if (n % j == 0 && i % (n / j) == 0) {
        f = false;
        s += j + '0';
        break;
      }
    }
    if (f) {
      s += '-';
    }
  }
  cout << s << endl;
  return 0;
}
