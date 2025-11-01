// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    if (i < m) {
      cout << "OK" << endl;
    } else {
      cout << "Too Many Requests" << endl;
    }
  }
  return 0;
}
