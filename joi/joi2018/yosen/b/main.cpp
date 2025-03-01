// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0, now = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 0) {
      now = 0;
    } else {
      now++;
    }
    ans = max(ans, now + 1);
  }
  cout << ans << endl;
  return 0;
}
