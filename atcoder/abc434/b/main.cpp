// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> sum(m, 0), cnt(m, 0);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    sum[a - 1] += b;
    cnt[a - 1]++;
  }
  for (int i = 0; i < m; i++) {
    cout << (double) sum[i] / cnt[i] << endl;
  }
  return 0;
}
