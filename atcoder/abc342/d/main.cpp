// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    for (long long x = 2; x * x <= a; x++) {
      while (a % (x * x) == 0) {
        a /= x * x;
      }
    }
    cnt[a]++;
  }
  long long ans = 0;
  for (auto p : cnt) {
    ans += (long long) p.second * (p.second - 1) / 2;
    if (p.first == 0) {
      ans += (long long) p.second * (n - p.second);
    }
  }
  cout << ans << endl;
  return 0;
}
