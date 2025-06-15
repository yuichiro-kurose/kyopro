// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long ans = (long long) n * (n - 1) / 2;
  cout << ans << endl;
  return 0;
}
