// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d;
  string n;
  cin >> d >> n;
  int ans = 0;
  for (char c : n) {
    if (c == d + '0') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
