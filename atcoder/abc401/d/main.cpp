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
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?') {
      if (i - 1 >= 0 && s[i - 1] == 'o' || i + 1 < s.size() && s[i + 1] == 'o') {
        s[i] = '.';
      }
    }
    if (s[i] == 'o') {
      k--;
    }
  }
  if (k == 0) {
    for (char c : s) {
      if (c == '?') {
        cout << '.';
      } else {
        cout << c;
      }
    }
    cout << endl;
    return 0;
  }
  int cnt = 0;
  for (char c : s) {
    if (c == '?') {
      cnt++;
    }
  }
  vector<int> a;
  int now = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?') {
      now++;
    } else {
      if (now > 0) {
        a.push_back(now);
        now = 0;
      }
    }
  }
  if (now > 0) {
    a.push_back(now);
  }
  int can = 0;
  for (int i = 0; i < a.size(); i++) {
    can += (a[i] + 1) / 2;
  }
  if (can == k) {
    int x = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '?') {
        x++;
      } else {
        if (x & 1) {
          for (int j = 0; j < x; j++) {
            if (j & 1) {
              s[i - j - 1] = '.';
            } else {
              s[i - j - 1] = 'o';
            }
          }
        }
        x = 0;
      }
    }
    if (x & 1) {
      for (int j = 0; j < x; j++) {
        if (j & 1) {
          s[s.size() - 1 - j] = '.';
        } else {
          s[s.size() - 1 - j] = 'o';
        }
      }
    }
  }
  cout << s << endl;
  return 0;
}
