// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (cnt == d) {
      break;
    }
    if (s[i] == '@') {
      s[i] = '.';
      cnt++;
    }
  }
  cout << s << endl;
  return 0;
}
