// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l, r;
  string s;
  cin >> n >> l >> r >> s;
  for (int i = l - 1; i < r; i++) {
    if (s[i] == 'x') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
