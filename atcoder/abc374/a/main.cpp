// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  if (s.substr(s.size() - 3, 3) == "san") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
