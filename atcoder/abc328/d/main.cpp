// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t = "";
  for (char c : s) {
    t += c;
    int n = t.size();
    if (n - 3 >= 0 && t[n - 3] == 'A' && t[n - 2] == 'B' && t[n - 1] == 'C') {
      t.pop_back();
      t.pop_back();
      t.pop_back();
    }
  }
  cout << t << endl;
  return 0;
}
