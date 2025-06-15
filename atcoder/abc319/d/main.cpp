// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> l(n);
  int mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> l[i];
    mx = max(mx, l[i]);
  }
  long long left = mx - 1, right = inf;
  while (left + 1 < right) {
    long long mid = (left + right) / 2;
    int cnt = 1;
    long long now = 0;
    for (int i = 0; i < n; i++) {
      if (now + l[i] > mid) {
        cnt++;
        now = l[i] + 1;
      } else {
        now += l[i] + 1;
      }
    }
    if (cnt <= m) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << right << endl;
  return 0;
}
