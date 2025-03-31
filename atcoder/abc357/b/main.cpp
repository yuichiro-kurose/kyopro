// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int a = 0, b = 0;
  for (char c : s) {
    if (isupper(c)) {
      a++;
    } else {
      b++;
    }
  }
  if (a > b) {
    for (char& c : s) {
      c = toupper(c);
    }
  } else {
    for (char& c : s) {
      c = tolower(c);
    }
  }
  cout << s << endl;
  return 0;
}
