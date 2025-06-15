// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<long long> p(n + 1, 1);
  for (int i = 1; i <= n; i++) {
    p[i] = p[i - 1] * 10;
  }
  int ans = 0;
  for (long long i = 0; i * i < p[n]; i++) {
    string t = to_string(i * i);
    while (s.size() - t.size() > 0) {
      t += '0';
    }
    sort(t.begin(), t.end());
    if (s == t) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
