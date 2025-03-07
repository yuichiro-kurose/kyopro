// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<int>> cnt(3, vector<int>(46, 0));
  int n;
  cin >> n;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      cnt[i][x % 46]++;
    }
  }
  long long ans = 0;
  for (int i = 0; i < 46; i++) {
    for (int j = 0; j < 46; j++) {
      for (int k = 0; k < 46; k++) {
        if ((i + j + k) % 46 == 0) {
          ans += (long long) cnt[0][i] * cnt[1][j] * cnt[2][k];
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
