// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, x;
  cin >> n >> k >> x;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<string> f;
  auto dfs = [&](auto dfs, int cnt, string now) -> void {
    if (cnt == k) {
      f.push_back(now);
    } else {
      for (int i = 0; i < n; i++) {
        dfs(dfs, cnt + 1, now + s[i]);
      }
    }
  };
  dfs(dfs, 0, "");
  sort(f.begin(), f.end());
  cout << f[x - 1] << endl;
  return 0;
}
