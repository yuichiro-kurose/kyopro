// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  a--;
  b--;
  string s;
  cin >> s;
  for (int i = 0; i < a; i++) {
    cout << s[i];
  }
  for (int i = b; i >= a; i--) {
    cout << s[i];
  }
  for (int i = b + 1; i < n; i++) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}
