// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l;
  cin >> n >> l;
  int ans = 0;
  while (n--) {
    int a;
    cin >> a;
    if (a >= l) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
