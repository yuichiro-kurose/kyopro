// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size() == 1) {
      cout << s << endl;
      continue;
    }
    int pos1 = n - 1, pos2 = n - 1;
    bool f = false;
    for (int i = 0; i < n - 1; i++) {
      if (!f && s[i] > s[i + 1]) {
        pos1 = i;
        f = true;
      }
      if (f && s[i + 1] > s[pos1]) {
        pos2 = i;
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      if (i != pos1) {
        cout << s[i];
      }
      if (i == pos2) {
        cout << s[pos1];
      }
    }
    cout << endl;
  }
  return 0;
}
