// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  int mx = 0, ans = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] > mx && cnt[a[i]] == 1) {
      ans = i + 1;
      mx = max(mx, a[i]);
    }
  }
  cout << ans << endl;
  return 0;
}
