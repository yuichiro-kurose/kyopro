// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<string, int> mp;
  int max_cnt = 0;
  for (int i = 0; i < n - k + 1; i++) {
    string t = "";
    for (int j = i; j < i + k; j++) {
      t += s[j];
    }
    mp[t]++;
    max_cnt = max(max_cnt, mp[t]);
  }
  cout << max_cnt << endl;
  for (auto p : mp) {
    if (p.second == max_cnt) {
      cout << p.first << endl;
    }
  }
  return 0;
}
