// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  int cnt = 1;
  for (int i = 2; (long long) i * i <= n; i++) {
    while (n % i == 0 && n / i > 1) {
      n /= i;
      cnt++;
    }
  }
  int ans = 0;
  while (pow(2, ans) < cnt) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
