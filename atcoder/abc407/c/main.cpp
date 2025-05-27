// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    a[i] = s[i] - '0';
  }
  int ans = 1;
  for (int i = 0; i < n - 1; i++) {
    ans += (a[i] - a[i + 1] + 10) % 10;
    ans++;
  }
  ans += a[n - 1];
  cout << ans << endl;
  return 0;
}
