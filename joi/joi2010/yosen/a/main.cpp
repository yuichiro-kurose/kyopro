// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans;
  cin >> ans;
  for (int i = 0; i < 9; i++) {
    int a;
    cin >> a;
    ans -= a;
  }
  cout << ans << endl;
  return 0;
}
