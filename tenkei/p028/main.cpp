// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(1002, vector<int>(1002, 0));
  for (int i = 0; i < n; i++) {
    int lx, ly, rx, ry;
    cin >> lx >> ly >> rx >> ry;
    a[lx][ly]++;
    a[lx][ry]--;
    a[rx][ly]--;
    a[rx][ry]++;
  }
  for (int i = 0; i <= 1000; i++) {
    for (int j = 1; j <= 1000; j++) {
      a[i][j] += a[i][j - 1];
    }
  }
  for (int i = 1; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++) {
      a[i][j] += a[i - 1][j];
    }
  }
  vector<int> cnt(n + 1, 0);
  for (int i = 0; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++) {
      cnt[a[i][j]]++;
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << cnt[i] << endl;
  }
  return 0;
}
