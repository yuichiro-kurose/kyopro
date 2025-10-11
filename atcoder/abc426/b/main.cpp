// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  map<char, int> cnt;
  for (char c : s) {
    cnt[c]++;
  }
  char ans;
  for (auto p : cnt) {
    if (p.second == 1) {
      ans = p.first;
    }
  }
  cout << ans << endl;
  return 0;
}
