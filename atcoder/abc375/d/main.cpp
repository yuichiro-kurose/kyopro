// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  vector<long long> l(26, 0), r(26, 0);
  l[s[0] - 'A']++;
  for (int i = 2; i < n; i++) {
    r[s[i] - 'A']++;
  }
  long long ans = 0;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 0; j < 26; j++) {
      ans += l[j] * r[j];
    }
    l[s[i] - 'A']++;
    r[s[i + 1] - 'A']--;
  }
  cout << ans << endl;
  return 0;
}
