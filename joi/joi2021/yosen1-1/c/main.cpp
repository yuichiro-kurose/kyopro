// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> ans;
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    bool f = false;
    for (int j = 0; j < n; j++) {
      if (a[j] == b) {
        f = true;
      }
    }
    if (f) {
      ans.insert(b);
    }
  }
  for (int x : ans) {
    cout << x << endl;
  }
  return 0;
}
