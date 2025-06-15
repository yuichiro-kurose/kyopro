// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << max(h, w) << endl;
  } else {
    cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
  }
  return 0;
}
