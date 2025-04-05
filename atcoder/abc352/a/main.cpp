// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if (x > y) {
    swap(x, y);
  }
  if (x < z && z < y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
