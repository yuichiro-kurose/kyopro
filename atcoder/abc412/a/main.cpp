// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a < b) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
