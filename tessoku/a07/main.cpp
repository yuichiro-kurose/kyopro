// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d;
  cin >> d;
  int n;
  cin >> n;
  vector<int> sum(d + 2, 0);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    sum[l]++;
    sum[r + 1]--;
  }
  for (int i = 1; i <= d; i++) {
    sum[i] += sum[i - 1];
    cout << sum[i] << endl;
  }
  return 0;
}
