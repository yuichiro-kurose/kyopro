// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int b;
  cin >> b;
  while (b > 0) {
    cout << b << endl;
    b /= 2;
  }
  return 0;
}
