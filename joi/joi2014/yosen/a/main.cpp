// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans = 0;
  for (int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    ans += max(a, 40);
  }
  ans /= 5;
  cout << ans << endl;
  return 0;
}
