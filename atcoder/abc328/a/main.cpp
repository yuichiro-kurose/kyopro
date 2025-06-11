// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    if (s <= x) {
      ans += s;
    }
  }
  cout << ans << endl;
  return 0;
}
