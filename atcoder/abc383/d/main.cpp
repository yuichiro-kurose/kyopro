// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  vector<bool> f(2000001, true);
  for (int i = 2; i * i <= 2000000; i++) {
    if (f[i]) {
      for (int j = i + i; j <= 2000000; j += i) {
        f[j] = false;
      }
    }
  }
  vector<int> p;
  for (int i = 2; i <= 2000000; i++) {
    if (f[i]) {
      p.push_back(i);
    }
  }
  int ans = 0;
  for (int x : p) {
    if (pow(x, 8) > n) {
      break;
    }
    ans++;
  }
  for (int i = 0; i < p.size(); i++) {
    int j = upper_bound(p.begin(), p.end(), pow(n, 0.5) / p[i]) - p.begin() - 1;
    if (i >= j) {
      break;
    }
    ans += j - i;
  }
  cout << ans << endl;
  return 0;
}
