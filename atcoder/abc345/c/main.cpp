// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  vector<int> cnt(26, 0);
  for (char c : s) {
    cnt[c - 'a']++;
  }
  bool f = false;
  long long n = s.size();
  long long ans = n * (n - 1) / 2;
  for (int i = 0; i < 26; i++) {
    ans -= (long long) cnt[i] * (cnt[i] - 1) / 2;
  }
  for (int i = 0; i < 26; i++) {
    if (cnt[i] > 1) {
      f = true;
    }
  }
  if (f) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
