// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  vector<int> imos(n + 2, 0);
  while (m--) {
    int l, r;
    cin >> l >> r;
    imos[l]++;
    imos[r + 1]--;
  }
  for (int i = 1; i <= n; i++) {
    imos[i] += imos[i - 1];
    if (imos[i] % 2 == 0) {
      cout << s[i - 1];
    } else {
      cout << t[i - 1];
    }
  }
  cout << endl;
  return 0;
}
