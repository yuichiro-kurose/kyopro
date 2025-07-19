// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  vector<int> a;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '#') {
      a.push_back(i + 1);
    }
  }
  for (int i = 0; i < a.size(); i += 2) {
    cout << a[i] << ',' << a[i + 1] << endl;
  }
  return 0;
}
