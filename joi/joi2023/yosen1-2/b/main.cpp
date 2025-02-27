// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a; cin >> a;
  int b; cin >> b;
  if (a < b) cout << -1 << endl;
  if (a == b) cout << 0 << endl;
  if (a > b) cout << 1 << endl;
  return 0;
}
