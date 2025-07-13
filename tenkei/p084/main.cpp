// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  string s;
  cin >> n >> s;
  long long ans = n * (n - 1) / 2;
  int l = 0, r = 0;
  while (l < n && r < n) {
    while (r + 1 < n && s[l] == s[r + 1]) {
      r++;
    }
    long long len = r - l + 1;
    ans -= len * (len - 1) / 2;
    l = r + 1;
    r = l;
  }
  cout << ans << endl;
  return 0;
}
