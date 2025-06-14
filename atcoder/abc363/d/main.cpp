// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  n--;
  if (n <= 9) {
    cout << n << endl;
    return 0;
  }
  int dig = 1, cnt = 1;
  long long x = 9;
  while (n - x > 0) {
    n -= x;
    if (!(cnt & 1)) {
      dig++;
      x *= 10;
    }
    cnt++;
  }
  long long a = powl(10, dig - 1) + n - 1;
  string s = to_string(a);
  string ans = s;
  if (cnt & 1) {
    s.pop_back();
  }
  reverse(s.begin(), s.end());
  ans += s;
  cout << ans << endl;
  return 0;
}
