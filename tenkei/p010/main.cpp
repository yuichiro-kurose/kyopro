// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> sum(2, vector<int>(n + 1, 0));
  for (int i = 1; i <= n; i++) {
    int c, p;
    cin >> c >> p;
    sum[c - 1][i] = p;
  }
  for (int i = 1; i <= n; i++) {
    sum[0][i] += sum[0][i - 1];
    sum[1][i] += sum[1][i - 1];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    int a = sum[0][r] - sum[0][l - 1];
    int b = sum[1][r] - sum[1][l - 1];
    cout << a << ' ' << b << endl;
  }
}
