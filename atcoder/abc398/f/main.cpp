// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

vector<int> Manachar(string s) {
  vector<int> r(s.size());
  int i = 0, j = 0;
  while (i < s.size()) {
    while (i - j >= 0 && i + j < s.size() && s[i - j] == s[i + j]) {
      j++;
    }
    r[i] = j;
    int k = 1;
    while (i - k >= 0 && k + r[i - k] < j) {
      r[i + k] = r[i - k];
      k++;
    }
    i += k;
    j -= k;
  }
  return r;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t;
  for (int i = 0; i < s.size(); i++) {
    if (i > 0) {
      t.push_back('$');
    }
    t.push_back(s[i]);
  }
  vector<int> r = Manachar(t);
  int x = 0;
  for (int i = 0; i < r.size(); i++) {
    if (r[i] == r.size() - i) {
      x = r[i];
      break;
    }
  }
  cout << s;
  for (int i = s.size() - x - 1; i >= 0; i--) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}
