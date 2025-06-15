// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> ans;
  for (int i = 0; i < 1 << n; i++) {
    string s = "";
    int cnt = 0;
    bool f = true;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        if (cnt == 0) {
          f = false;
          break;
        }
        cnt--;
        s += ')';
      } else {
        s += '(';
        cnt++;
      }
    }
    if (f && cnt == 0) {
      ans.push_back(s);
    }
  }
  sort(ans.begin(), ans.end());
  for (auto s : ans) {
    cout << s << endl;
  }
  return 0;
}
