// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, g, b;
  cin >> r >> g >> b;
  string c;
  cin >> c;
  if (c == "Red") {
    cout << min(g, b) << endl;
  }
  if (c == "Green") {
    cout << min(r, b) << endl;
  }
  if (c == "Blue") {
    cout << min(r, g) << endl;
  }
  return 0;
}
