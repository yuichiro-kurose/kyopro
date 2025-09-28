// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n, 0), b(n, 0);
  map<int, long long> cnt;
  int o;
  cin >> o;
  cnt[o]++;
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
    a[i] = max(a[i], a[i - 1]);
  }
  cin >> o;
  for (int i = 1; i < n; i++) {
    cin >> b[i];
    cnt[b[i]]++;
    b[i] = max(b[i], b[i - 1]);
  }
  for (int i = 1; i < n; i++) {
    int x = upper_bound(b.begin(), b.end(), a[i]) - b.begin() - 1;
    cnt[a[i]] += x;
  }
  for (int j = 1; j < n; j++) {
    int x = lower_bound(a.begin(), a.end(), b[j]) - a.begin() - 1;
    cnt[b[j]] += x;
  }
  pair<int, long long> ans;
  for (auto p : cnt) {
    if (ans.second <= p.second) {
      ans = p;
    }
  }
  cout << ans.first << ' ' << ans.second << endl;
  return 0;
}
