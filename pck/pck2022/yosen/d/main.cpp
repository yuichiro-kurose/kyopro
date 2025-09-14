// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = n;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      ans--;
    }
  }
  cout << max(ans, 1) << endl;
  return 0;
}
