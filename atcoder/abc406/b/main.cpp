// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  long long mx = 1;
  for (int i = 0; i < k; i++) {
    mx *= 10;
  }
  long long ans = 1;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    if (a >= (long double) mx / ans) {
      ans = 1;
    } else {
      ans *= a;
    }
  }
  cout << ans << endl;
  return 0;
}
