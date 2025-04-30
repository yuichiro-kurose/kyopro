// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      if (a == 1) {
        g[i].push_back(j);
      }
    }
  }
  for (auto vec : g) {
    for (int i = 0; i < vec.size(); i++) {
      if (i > 0) {
        cout << ' ';
      }
      cout << vec[i] + 1;
    }
    cout << endl;
  }
  return 0;
}
