// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  for (int i = n - 2; i >= 0; i--) {
    if (s[i] == 'W' && s[i + 1] == 'A') {
      s[i] = 'A';
      s[i + 1] = 'C';
    }
  }
  cout << s << endl;
  return 0;
}
