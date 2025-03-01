// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> cnt(3, 0);
  for (char c : s) {
    if (c == 'J') cnt[0]++;
    if (c == 'O') cnt[1]++;
    if (c == 'I') cnt[2]++;
  }
  for (int i = 0; i < cnt[0]; i++) {
    cout << 'J';
  }
  for (int i = 0; i < cnt[1]; i++) {
    cout << 'O';
  }
  for (int i = 0; i < cnt[2]; i++) {
    cout << 'I';
  }
  cout << endl;
  return 0;
}
