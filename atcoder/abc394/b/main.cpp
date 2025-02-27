// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<pair<int, string>> s(n);
  rep(i, n) {
    cin >> s[i].second;
    s[i].first = s[i].second.size();
  }
  sort(s.begin(), s.end());
  rep(i, n) cout << s[i].second;
  cout << endl;
  return 0;
}
