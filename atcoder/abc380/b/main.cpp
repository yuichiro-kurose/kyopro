// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  vector<int> a;
  int cnt = 0;
  for (char c : s) {
    if (c == '|') {
      a.push_back(cnt);
      cnt = 0;
    } else {
      cnt++;
    }
  }
  for (int i = 1; i < a.size(); i++) {
    if (i > 1) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << endl;
  return 0;
}
