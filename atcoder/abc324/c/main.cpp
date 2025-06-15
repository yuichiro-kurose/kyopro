// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string t;
  cin >> n >> t;
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    if (s.size() == t.size()) {
      int cnt = 0;
      for (int j = 0; j < s.size(); j++) {
        if (s[j] != t[j]) {
          cnt++;
        }
      }
      if (cnt <= 1) {
        ans.push_back(i);
      }
    }
    if (abs((int) s.size() - (int) t.size()) == 1) {
      string x, y;
      if (s.size() > t.size()) {
        x = s, y = t;
      } else {
        x = t, y = s;
      }
      int p = 0, q = 0;
      while (p < x.size() && q < y.size()) {
        if (x[p] != y[q]) {
          p++;
        } else {
          p++;
          q++;
        }
      }
      if (q == y.size()) {
        ans.push_back(i);
      }
    }
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
