// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> cnt1, cnt2;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt1[i + a[i]]++;
    cnt2[i - a[i]]++;
  }
  long long ans = 0;
  for (int i = -200000; i < 400000; i++) {
    ans += (long long) cnt1[i] * cnt2[i];
  }
  cout << ans << endl;
  return 0;
}
