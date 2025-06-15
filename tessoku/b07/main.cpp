// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  int n;
  cin >> n;
  vector<int> ans(t + 1, 0);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    ans[l]++;
    ans[r]--;
  }
  for (int i = 0; i < t; i++) {
    if (i > 0) {
      ans[i] += ans[i - 1];
    }
    cout << ans[i] << endl;
  }
  return 0;
}
