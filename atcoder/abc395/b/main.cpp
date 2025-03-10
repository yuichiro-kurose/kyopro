// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (min({i, j, n - i - 1, n - j - 1}) & 1) {
        cout << '.';
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }
  return 0;
}
