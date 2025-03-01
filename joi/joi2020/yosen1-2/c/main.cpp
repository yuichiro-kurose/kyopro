// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> b(m, 0);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    a--;
    b[a]++;
  }
  for (int i = 0; i < m; i++) {
    ans = max(ans, b[i]);
  }
  cout << ans << endl;
  return 0;
}
