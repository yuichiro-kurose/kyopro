// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d, f;
  cin >> d >> f;
  cout << 7 - ((d - f) % 7) << endl;
  return 0;
}
