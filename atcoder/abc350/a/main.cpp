// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  if ("ABC001" <= s && s <= "ABC349" && s != "ABC316") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
