// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  long long ans = 0;
  vector<int> cnt(n, 0);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    int x = (a + b) % n;
    ans += i - cnt[x];
    cnt[x]++;
  }
  cout << ans << endl;
  return 0;
}
