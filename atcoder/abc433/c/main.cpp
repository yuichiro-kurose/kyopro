// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  long long ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int l = i + 1, r = i;
    int len = 0;
    char cl = s[l - 1], cr = cl + 1;
    while (l - 1 >= 0 && r + 1 < n && s[l - 1] == cl && s[r + 1] == cr) {
      l--;
      r++;
      len++;
    }
    ans += len;
  }
  cout << ans << endl;
  return 0;
}
