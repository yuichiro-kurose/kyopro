// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int lb = -1, ub = inf;
  while (ub - lb > 1) {
    int mid = (lb + ub) / 2;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] >= mid) {
        cnt++;
      }
    }
    if (cnt >= mid) {
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;
  return 0;
}
