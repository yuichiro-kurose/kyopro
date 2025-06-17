// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    cout << 1 << endl;
    return 0;
  }
  cout << n / 2 << endl;
  for (int i = 2; i <= n; i += 2) {
    if (i > 2) {
      cout << ' ';
    }
    cout << i;
  }
  cout << endl;
  return 0;
}
