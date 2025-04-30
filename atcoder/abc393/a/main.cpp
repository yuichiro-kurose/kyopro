// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const string f = "fine", s = "sick";

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s && s2 == s) {
    cout << 1 << endl;
  }
  if (s1 == s && s2 == f) {
    cout << 2 << endl;
  }
  if (s1 == f && s2 == s) {
    cout << 3 << endl;
  }
  if (s1 == f && s2 == f) {
    cout << 4 << endl;
  }
  return 0;
}
