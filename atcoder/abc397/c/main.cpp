// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> st1, st2;
  vector<int> cnt1(n, 0), cnt2(n, 0);
  for (int i = 0; i < n; i++) {
    st1.insert(a[i]);
    cnt1[i] = st1.size();
  }
  for (int i = n - 1; i >= 0; i--) {
    st2.insert(a[i]);
    cnt2[i] = st2.size();
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans = max(ans, cnt1[i] + cnt2[i + 1]);
  }
  cout << ans << endl;
  return 0;
}
