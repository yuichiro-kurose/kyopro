// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s = 0;
  rep(i, 4) {
    int a; cin >> a;
    s += a;
  }
  int t = 0;
  rep(i, 4) {
    int b; cin >> b;
    t += b;
  }
  cout << max(s, t) << endl;
  return 0;
}
