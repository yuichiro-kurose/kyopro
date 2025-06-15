// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, c, w;
  cin >> n >> c >> w;
  if (n * c >= w) {
    cout << "Yes" << endl;
    cout << (w + c - 1) / c << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
