// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c; cin >> a >> b >> c;
  cout << (c / (a * 7 + b)) * 7 + min((c % (a * 7 + b) + a - 1) / a, 7) << endl;
  return 0;
}
