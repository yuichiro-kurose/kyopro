// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int ans = -1;
  for (int i = 0; i < n; i++) {
    int h;
    cin >> h;
    m -= h;
    if (ans == -1 && m < 0) {
      ans = i;
    }
  }
  if (ans == -1) {
    ans = n;
  }
  cout << ans << endl;
  return 0;
}
