// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int l, r;
  cin >> l >> r;
  if (l == r) {
    cout << "Invalid" << endl;
    return 0;
  }
  if (l == 1) {
    cout << "Yes" << endl;
  }
  if (r == 1) {
    cout << "No" << endl;
  }
  return 0;
}
