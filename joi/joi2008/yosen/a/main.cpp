// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a;
  cin >> a;
  int x = 1000 - a;
  cout << x / 500 + (x % 500) / 100 + (x % 100) / 50 + (x % 50) / 10 + (x % 10) / 5 + (x % 5) << endl;
  return 0;
}
