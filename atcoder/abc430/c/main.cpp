// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  vector<int> cnt_a(n + 1, 0), cnt_b(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cnt_a[i] = cnt_a[i - 1];
    cnt_b[i] = cnt_b[i - 1];
    if (s[i - 1] == 'a') {
      cnt_a[i]++;
    } else {
      cnt_b[i]++;
    }
  }
  int al = 1, br = 0;
  long long ans = 0;
  for (int l = 1; l <= n; l++) {
    while (al <= n && cnt_a[al] - cnt_a[l - 1] < a) {
      al++;
    }
    while (br + 1 <= n && cnt_b[br + 1] - cnt_b[l - 1] < b) {
      br++;
    }
    if (al <= br) {
      ans += br - al + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
