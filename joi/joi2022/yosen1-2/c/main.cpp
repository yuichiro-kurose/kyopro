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
    if (s[i + 1] == 'J') {
      cout << s[i] << endl;
    }
  }
  return 0;
}
