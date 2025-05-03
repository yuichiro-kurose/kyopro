// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  cin >> n;
  char now = 'a';
  for (char c : n) {
    if (c >= now) {
      cout << "No" << endl;
      return 0;
    }
    now = c;
  }
  cout << "Yes" << endl;
  return 0;
}
