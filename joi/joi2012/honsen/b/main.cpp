// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  vector<int> s(a), t(b);
  for (int i = 0; i < a; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < b; i++) {
    cin >> t[i];
  }
  int ans = 0;
  for (int l = 0; l < b; l++) {
    int r = l - 1;
    for (int i = 0; i < a; i++) {
      if (r + 1 < b && s[i] == t[r + 1]) {
        r++;
      }
    }
    ans = max(ans, r - l + 1);
  }
  cout << ans << endl;
  return 0;
}
