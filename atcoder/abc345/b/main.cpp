// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long x;
  cin >> x;
  if (x >= 0) {
    cout << (x + 9) / 10 << endl;
  } else {
    cout << x / 10 << endl;
  }
  return 0;
}
