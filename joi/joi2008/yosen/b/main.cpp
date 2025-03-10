// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int joi = 0, ioi = 0;
  for (int i = 0; i < s.size() - 2; i++) {
    if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') {
      joi++;
    }
    if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
      ioi++;
    }
  }
  cout << joi << endl;
  cout << ioi << endl;
  return 0;
}
