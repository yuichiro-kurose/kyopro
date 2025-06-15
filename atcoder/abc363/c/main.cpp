// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int ans = 0;
  do {
    bool f = true;
    for (int i = 0; i < n - k + 1; i++) {
      string t1 = s.substr(i, k), t2 = t1;
      reverse(t2.begin(), t2.end());
      if (t1 == t2) {
        f = false;
      }
    }
    if (f) {
      ans++;
    }
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
  return 0;
}
