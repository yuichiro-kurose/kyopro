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
  vector<int> cnt(3, 0);
  for (char c : s) {
    if (c == 'J') cnt[0]++;
    if (c == 'O') cnt[1]++;
    if (c == 'I') cnt[2]++;
  }
  rep(i, cnt[0]) cout << 'J';
  rep(i, cnt[1]) cout << 'O';
  rep(i, cnt[2]) cout << 'I';
  cout << endl;
  return 0;
}
