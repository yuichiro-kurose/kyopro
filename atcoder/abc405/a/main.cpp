// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, x;
  cin >> r >> x;
  if (x == 1 && 1600 <= r && r <= 2999 || x == 2 && 1200 <= r && r <= 2399) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
