// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, string>> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i].second;
    s[i].first = s[i].second.size();
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    cout << s[i].second;
  }
  cout << endl;
  return 0;
}
