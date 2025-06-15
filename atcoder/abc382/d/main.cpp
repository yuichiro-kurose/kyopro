// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> ans;
  auto dfs = [&](auto dfs, vector<int> a) -> void {
    if (a.size() == n) {
      ans.push_back(a);
    } else {
      int x;
      if (a.size() == 0) {
        x = 1;
      } else {
        x = a.back() + 10;
      }
      while (x + 10 * (n - a.size() - 1) <= m) {
        a.push_back(x);
        dfs(dfs, a);
        a.pop_back();
        x++;
      }
    }
  };
  dfs(dfs, vector<int>(0));
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < n; j++) {
      if (j > 0) {
        cout << ' ';
      }
      cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}
