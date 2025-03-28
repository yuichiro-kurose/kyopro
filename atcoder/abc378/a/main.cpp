// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> cnt(4, 0);
  for (int i = 0; i < 4; i++) {
    int a;
    cin >> a;
    cnt[a - 1]++;
  }
  int ans = 0;
  for (int i = 0; i < 4; i++) {
    ans += cnt[i] / 2;
  }
  cout << ans << endl;
  return 0;
}
