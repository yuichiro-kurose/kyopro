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
  if (n >= 3 && s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
