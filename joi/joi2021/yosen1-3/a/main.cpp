// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b; cin >> a >> b;
  cout << max(a + b, a - b) << endl;
  cout << min(a + b, a - b) << endl;
  return 0;
}
