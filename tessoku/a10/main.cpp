// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> left(n + 2, 0), right(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    left[i] = a;
    right[i] = a;
  }
  for (int i = 1; i <= n; i++) {
    left[i] = max(left[i], left[i - 1]);
    right[n - i + 1] = max(right[n - i + 1], right[n - i + 2]);
  }
  int d;
  cin >> d;
  for (int i = 0; i < d; i++) {
    int l, r;
    cin >> l >> r;
    cout << max(left[l - 1], right[r + 1]) << endl;
  }
  return 0;
}
