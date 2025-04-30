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
  int cnt = 0;
  for (char c : s) {
    if (cnt == 0 && c == 'I') {
      cnt++;
    }
    if (cnt == 1 && c == 'O') {
      cnt++;
    }
    if (cnt == 2 && c == 'I') {
      cnt++;
    }
  }
  if (cnt == 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
