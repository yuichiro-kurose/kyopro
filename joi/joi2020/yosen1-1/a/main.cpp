// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    int x; cin >> x;
    sum += x;
  }
  if (sum <= 4) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
  }
  return 0;
}
