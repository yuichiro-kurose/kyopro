// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0;
  rep(i, n - 1) if (s[i] == 'O' && s[i + 1] == 'X' || s[i] == 'X' && s[i + 1] == 'O') {
    i++;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
