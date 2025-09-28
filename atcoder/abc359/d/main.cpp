// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

bool f(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<string, int> dp;
  dp[""] = 1;
  for (int i = 0; i < n; i++) {
    map<string, int> old;
    swap(dp, old);
    for (auto [t, x] : old) {
      for (char c = 'A'; c <= 'B'; c++) {
        if (s[i] != '?' && s[i] != c) {
          continue;
        }
        string nt = t + c;
        if (nt.size() == k && f(nt)) {
          continue;
        }
        if (nt.size() == k) {
          nt.erase(nt.begin());
        }
        dp[nt] = (dp[nt] + x) % mod;
      }
    }
  }
  int ans = 0;
  for (auto [t, x] : dp) {
    ans = (ans + x) % mod;
  }
  cout << ans << endl;
  return 0;
}
