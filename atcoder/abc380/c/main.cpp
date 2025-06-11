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
  vector<string> a;
  char now = s[0];
  a.push_back("");
  for (char c : s) {
    if (c != now) {
      now = c;
      a.push_back("");
    }
    a.back() += now;
  }
  int cnt = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i][0] == '1') {
      cnt++;
    }
    if (cnt == k) {
      swap(a[i], a[i - 1]);
      break;
    }
  }
  for (string x : a) {
    cout << x;
  }
  cout << endl;
  return 0;
}
