// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long ans = 0;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    ans += a;
    mx = max(mx, b - a);
  }
  cout << ans + mx << endl;
  return 0;
}
