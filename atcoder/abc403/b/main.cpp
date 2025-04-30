// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string t, u;
  cin >> t >> u;
  for (int i = 0; i < t.size() - u.size() + 1; i++) {
    bool f = true;
    for (int j = 0; j < u.size(); j++) {
      if (t[i + j] != '?' && t[i + j] != u[j]) {
        f = false;
      }
    }
    if (f) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
