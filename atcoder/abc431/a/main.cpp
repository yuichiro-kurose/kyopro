// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, b;
  cin >> h >> b;
  cout << max(0, h - b) << endl;
  return 0;
}
