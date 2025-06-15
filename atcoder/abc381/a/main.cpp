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
  bool f = true;
  if (!(n & 1)) {
    f = false;
  }
  for (int i = 1; i <= (n + 1) / 2 - 1; i++) {
    if (s[i - 1] != '1') {
      f = false;
    }
  }
  if (s[(n + 1) / 2 - 1] != '/') {
    f = false;
  }
  for (int i = (n + 1) / 2 + 1; i <= n; i++) {
    if (s[i - 1] != '2') {
      f = false;
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
