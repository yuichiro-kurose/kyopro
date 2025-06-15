// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  vector<pair<int, char>> a(26);
  for (int i = 0; i < 26; i++) {
    a[i].second = 'a' + i;
  }
  for (char c : s) {
    a[c - 'a'].first--;
  }
  sort(a.begin(), a.end());
  cout << a[0].second << endl;
  return 0;
}
