// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      cout << 'x';
    } else {
      cout << 'o';
    }
  }
  cout << endl;
  return 0;
}
