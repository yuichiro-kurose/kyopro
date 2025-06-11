// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string name;
  cin >> name;
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      bool f;
      for (int dist = 1; dist < 100; dist++) {
        f = true;
        int p = i;
        for (int j = 0; j < name.size(); j++) {
          if (p >= s.size() || s[p] != name[j]) {
            f = false;
            break;
          }
          p += dist;
        }
        if (f) {
          ans++;
          break;
        }
      }
      if (f) {
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
