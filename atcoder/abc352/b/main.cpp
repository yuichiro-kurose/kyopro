// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, t;
  cin >> s >> t;
  vector<int> a;
  int idx = 0;
  for (int i = 0; i < t.size(); i++) {
    if (s[idx] == t[i]) {
      a.push_back(i + 1);
      idx++;
    }
  }
  for (int i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << endl;
  return 0;
}
