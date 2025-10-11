// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long ans = inf;
    for (char num = '0'; num <= '1'; num++) {
      int mx_len = 0;
      int p = -1, q = -1;
      for (int i = 0; i < n; i++) {
        if (s[i] != num) {
          continue;
        }
        int j = i;
        while (j + 1 < n && s[j + 1] == num) {
          j++;
        }
        if (mx_len < j - i + 1) {
          mx_len = j - i + 1;
          p = i;
          q = j;
        }
        i = j;
      }
      if (p == -1 && q == -1) {
        continue;
      }
      // cout << p << ' ' << q << endl;
      long long cost = 0;
      int l = 0, r = n - 1, nl = 0, nr = n - 1;
      while (l < p) {
        while (s[nl] == num) {
          nl++;
        }
        cost += nl - l;
        while (s[nl] != num) {
          nl++;
        }
        cost += nl - l;
        l = nl;
      }
      while (r > q) {
        while (s[nr] == num) {
          nr--;
        }
        cost += r - nr;
        while (s[nr] != num) {
          nr--;
        }
        cost += r - nr;
        r = nr;
      }
      ans = min(ans, cost);
    }
    cout << ans << endl;
  }
  return 0;
}
