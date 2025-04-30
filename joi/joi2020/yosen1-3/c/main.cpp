// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int x = 0, now = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (x > a) {
      now = 1;
    } else {
      now++;
    }
    x = a;
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}
