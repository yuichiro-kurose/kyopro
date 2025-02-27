// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a;
  cin >> a;
  int b;
  cin >> b;
  int c;
  cin >> c;
  if (a + b + c <= 21) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
