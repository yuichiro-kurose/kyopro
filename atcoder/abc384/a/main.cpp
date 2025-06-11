// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  char c1, c2;
  cin >> c1 >> c2;
  string s;
  cin >> s;
  for (char& c : s) {
    if (c != c1) {
      c = c2;
    }
  }
  cout << s << endl;
  return 0;
}
