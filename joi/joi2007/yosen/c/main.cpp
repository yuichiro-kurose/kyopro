// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  for (char& c : s) {
    int n = c - 'A';
    n = (n - 3 + 26) % 26;
    c = 'A' + n;
  }
  cout << s << endl;
  return 0;
}
