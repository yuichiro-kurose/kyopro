// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  map<long long, long long> mp;
  auto f = [&](auto f, long long x) -> long long {
    if (x == 1) {
      return 0;
    }
    long long a = x / 2, b = (x + 1) / 2;
    if (!mp.count(a)) {
      mp[a] = f(f, a);
    }
    if (!mp.count(b)) {
      mp[b] = f(f, b);
    }
    return x + mp[a] + mp[b];
  };
  cout << f(f, n) << endl;
  return 0;
}
