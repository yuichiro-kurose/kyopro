// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int ans = INF;
  for (int i = 0; i < n - m + 1; i++) {
    int cnt = 0;
    for (int j = 0; j < m; j++) {
      cnt += (10 + (s[i + j] - '0') - (t[j] - '0')) % 10;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
