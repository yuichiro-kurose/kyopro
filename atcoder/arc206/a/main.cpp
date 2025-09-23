// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> cnt(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    cnt[a[i]]++;
  }
  long long ans = 1;
  for (int i = 0; i < n - 1; i++) {
    cnt[a[i]]--;
    if (a[i] == a[i + 1]) {
      continue;
    }
    ans += (n - i - 1) - cnt[a[i]];
  }
  cout << ans << endl;
  return 0;
}
