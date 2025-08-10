// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  double ans = 0;
  int n = s.size();
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 2; j < n; j++) {
      if (s[i] != 't' || s[j] != 't') {
        continue;
      }
      int x = 0;
      for (int k = i; k <= j; k++) {
        x += (s[k] == 't');
      }
      ans = max(ans, (double) (x - 2) / (j - i - 1));
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
