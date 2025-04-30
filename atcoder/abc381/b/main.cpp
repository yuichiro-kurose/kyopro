// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  bool f = true;
  if (n & 1) {
    f = false;
  }
  for (int i = 0; i < n - 1; i += 2) {
    if (s[i] != s[i + 1]) {
      f = false;
    }
  }
  vector<int> cnt(26, 0);
  for (char c : s) {
    cnt[c - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (cnt[i] != 0 && cnt[i] != 2) {
      f = false;
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
