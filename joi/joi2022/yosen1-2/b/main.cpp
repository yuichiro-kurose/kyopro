// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a; cin >> a;
  int b; cin >> b;
  int x = (a + b) % 12;
  if (x == 0) cout << 12 << endl;
  else cout << x << endl;
  return 0;
}
