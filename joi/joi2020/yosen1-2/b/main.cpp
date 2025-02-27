// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b; cin >> n >> a >> b;
  a--; b--;
  string s; cin >> s;
  rep(i, a) cout << s[i];
  for (int i = b; i >= a; i--) cout << s[i];
  for (int i = b + 1; i < n; i++) cout << s[i];
  cout << endl;
  return 0;
}
