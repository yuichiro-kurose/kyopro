// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  int ao = 0, bitaro = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'S' && t[i] == 'P') {
      ao++;
    }
    if (s[i] == 'R' && t[i] == 'P' || s[i] == 'S' && t[i] == 'R') {
      bitaro++;
    }
  }
  cout << ao << ' ' << bitaro << endl;
  return 0;
}
