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
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    bool f = false;
    vector<int> t;
    for (int j = 0; j < a.size(); j++) {
      if (a[j] != b || f) {
        t.push_back(a[j]);
      } else {
        f = true;
      }
    }
    a = t;
  }
  for (int i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << endl;
  return 0;
}
