// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t = s;
  for (char& c : t) {
    if (isupper(c)) {
      c = tolower(c);
    } else {
      c = toupper(c);
    }
  }
  int n = s.size();
  int q;
  cin >> q;
  vector<char> c(q);
  for (int i = 0; i < q; i++) {
    long long k;
    cin >> k;
    k--;
    long long x = k / n;
    if (__builtin_popcountll(x) & 1) {
      c[i] = t[k % n];
    } else {
      c[i] = s[k % n];
    }
  }
  for (int i = 0; i < q; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << c[i];
  }
  cout << endl;
  return 0;
}
