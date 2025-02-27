// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s; cin >> s;
  int cnt = 0;
  for (char c : s) if (c == '2') cnt++;
  rep(i, cnt) cout << 2;
  cout << endl;
  return 0;
}
