// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> type(q), p(q);
  vector<string> s(q);
  for (int i = 0; i < q; i++) {
    cin >> type[i] >> p[i];
    if (type[i] == 2) {
      cin >> s[i];
      reverse(s[i].begin(), s[i].end());
    }
  }
  string ans = "";
  int x = 0;
  for (int i = q - 1; i >= 0; i--) {
    if (type[i] == 1 && x == p[i]) {
      x = 0;
    }
    if (type[i] == 2 && x == p[i]) {
      ans += s[i];
    }
    if (type[i] == 3 && x == 0) {
      x = p[i];
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
