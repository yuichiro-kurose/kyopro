// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }
  auto dfs = [&](auto dfs, vector<int> a) -> void {
    if (a.size() == n) {
      int sum = 0;
      for (int i = 0; i < n; i++) {
        sum += a[i];
      }
      if (sum % k != 0) {
        return;
      }
      for (int i = 0; i < n; i++) {
        if (i > 0) {
          cout << ' ';
        }
        cout << a[i];
      }
      cout << endl;
    } else {
      for (int i = 1; i <= r[a.size()]; i++) {
        a.push_back(i);
        dfs(dfs, a);
        a.pop_back();
      }
    }
  };
  dfs(dfs, vector<int>(0));
  return 0;
}
