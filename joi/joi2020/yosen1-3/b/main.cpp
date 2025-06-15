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
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'j' && s[i + 1] == 'o' && s[i + 2] == 'i') {
      s[i] = 'J';
      s[i + 1] = 'O';
      s[i + 2] = 'I';
    }
  }
  cout << s << endl;
  return 0;
}
