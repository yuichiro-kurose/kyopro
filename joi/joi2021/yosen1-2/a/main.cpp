// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c;
  cin >> a >> b >> c;
  if (a <= c && c < b) {
    cout << 1 << endl;
  }
  else cout << 0 << endl;
  return 0;
}
