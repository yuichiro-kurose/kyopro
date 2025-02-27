// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<bool> f(30, true);
  rep(i, 28) {
    int a; cin >> a;
    f[a - 1] = false;
  }
  rep(i, 30) if (f[i]) cout << i + 1 << endl;
  return 0;
}
