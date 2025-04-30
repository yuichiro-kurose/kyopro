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
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 'a' && s[i + 1] == 'b' || s[i] == 'b' && s[i + 1] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
