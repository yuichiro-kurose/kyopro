// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

void sum(vector<vector<int>>& vec) {
  for (int i = 1; i <= 2000; i++) {
    for (int j = 1; j <= 2000; j++) {
      vec[i][j] += vec[i][j - 1];
    }
  }
  for (int i = 1; i <= 2000; i++) {
    for (int j = 1; j <= 2000; j++) {
      vec[i][j] += vec[i - 1][j];
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> u(n), d(n), l(n), r(n);
  vector<vector<int>> cnt(2002, vector<int>(2002, 0));
  for (int i = 0; i < n; i++) {
    cin >> u[i] >> d[i] >> l[i] >> r[i];
    cnt[u[i]][l[i]]++;
    cnt[u[i]][r[i] + 1]--;
    cnt[d[i] + 1][l[i]]--;
    cnt[d[i] + 1][r[i] + 1]++;
  }
  sum(cnt);
  int zero = 0;
  vector<vector<int>> one(2002, vector<int>(2002, 0));
  for (int i = 1; i <= 2000; i++) {
    for (int j = 1; j <= 2000; j++) {
      if (cnt[i][j] == 0) {
        zero++;
      }
      if (cnt[i][j] == 1) {
        one[i][j] = 1;
      }
    }
  }
  sum(one);
  for (int i = 0; i < n; i++) {
    int ans = zero + one[d[i]][r[i]] - one[d[i]][l[i] - 1] - one[u[i] - 1][r[i]] + one[u[i] - 1][l[i] - 1];
    cout << ans << endl;
  }
  return 0;
}
