// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = 0, mn = inf;
  rep(i, n) {
    int cnt = 0;
    rep(j, n) if (a[i] == a[j]) cnt++;
    if (mn > cnt) {
      mn = cnt;
      ans = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}
