// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans = 0;
  for (int i = 1; i <= 12; i++) {
    string s;
    cin >> s;
    if (s.size() == i) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
