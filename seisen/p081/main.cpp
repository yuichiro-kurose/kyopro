// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> cnt(1000002, 0);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    cnt[a]++;
    cnt[b + 1]--;
  }
  int ans = 0;
  for (int i = 0; i <= 1000000; i++) {
    if (i > 0) {
      cnt[i] += cnt[i - 1];
    }
    ans = max(ans, cnt[i]);
  }
  cout << ans << endl;
  return 0;
}
