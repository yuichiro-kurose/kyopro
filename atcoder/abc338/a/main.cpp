// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  bool f = true;
  if (islower(s[0])) {
    f = false;
  }
  for (int i = 1; i < s.size(); i++) {
    if (isupper(s[i])) {
      f = false;
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
