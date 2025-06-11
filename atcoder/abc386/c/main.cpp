// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  string s, t;
  cin >> s >> t;
  if (s.size() < t.size()) {
    swap(s, t);
  }
  bool f = true;
  int d = s.size() - t.size();
  if (d > 1) {
    f = false;
  }
  if (d == 0) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != t[i]) {
        cnt++;
      }
    }
    if (cnt > 1) {
      f = false;
    }
  }
  if (d == 1) {
    int p = 0, q = 0;
    while (p < s.size() && q < t.size()) {
      if (s[p] == t[q]) {
        p++;
        q++;
      } else {
        if (p != q) {
          f = false;
        }
        p++;
      }
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
