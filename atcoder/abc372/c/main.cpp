// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      cnt++;
    }
  }
  while (q--) {
    int x;
    char c;
    cin >> x >> c;
    x--;
    if (x - 2 >= 0 && s.substr(x - 2, 3) == "ABC" || x - 1 >= 0 && s.substr(x - 1, 3) == "ABC" || s.substr(x, 3) == "ABC") {
      cnt--;
    }
    s[x] = c;
    if (x - 2 >= 0 && s.substr(x - 2, 3) == "ABC" || x - 1 >= 0 && s.substr(x - 1, 3) == "ABC" || s.substr(x, 3) == "ABC") {
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
