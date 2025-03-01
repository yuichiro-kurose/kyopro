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
  for (int i = 0; i < n - 1; i++) {
    vector<int> ans(a.size() - 1);
    for (int j = 0; j < a.size() - 1; j++) {
      ans[j] = a[j] + a[j + 1];
      if (j > 0) {
        cout << ' ';
      }
      cout << ans[j];
    }
    cout << endl;
    a = ans;
  }
  return 0;
}
