// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  vector<int> q = p;
  sort(q.rbegin(), q.rend());
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    if (i > 0 && q[i] == q[i - 1]) {
      continue;
    }
    for (int j = 0; j < n; j++) {
      if (p[j] == q[i]) {
        ans[j] = i + 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
