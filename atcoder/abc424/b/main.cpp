// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> cnt(n, 0), ans;
  while (k--) {
    int a, b;
    cin >> a >> b;
    a--;
    cnt[a]++;
    if (cnt[a] == m) {
      ans.push_back(a + 1);
    }
  }
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
