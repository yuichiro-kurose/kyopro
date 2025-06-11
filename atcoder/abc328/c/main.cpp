// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<int> cnt(n + 1, 0);
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      cnt[i + 1]++;
    }
    cnt[i + 2] += cnt[i + 1];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << cnt[r - 1] - cnt[l - 1] << endl;
  }
  return 0;
}
