// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> ans;
  for (int i = 1; i <= l - 1; i++) {
    ans.push_back(i);
  }
  for (int i = r; i >= l; i--) {
    ans.push_back(i);
  }
  for (int i = r + 1; i <= n; i++) {
    ans.push_back(i);
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
