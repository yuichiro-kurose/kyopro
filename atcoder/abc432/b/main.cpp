// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string x;
  cin >> x;
  sort(x.begin(), x.end());
  int cnt = 0;
  for (char c : x) {
    if (c == '0') {
      cnt++;
    } else {
      cout << c;
      for (int i = 0; i < cnt; i++) {
        cout << '0';
      }
      cnt = 0;
    }
  }
  cout << endl;
  return 0;
}
