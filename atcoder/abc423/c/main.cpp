// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r;
  cin >> n >> r;
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
  int left = 0, right = n;
  while (left < n && l[left] == 1) {
    left++;
  }
  while (right - 1 >= 0 && l[right - 1] == 1) {
    right--;
  }
  int ans = 0;
  int cnt0 = 0, cnt1 = 0;
  for (int i = left; i < r; i++) {
    if (l[i] == 0) {
      cnt0++;
    } else {
      cnt1++;
    }
  }
  ans += cnt0 + cnt1 * 2;
  cnt0 = 0;
  cnt1 = 0;
  for (int i = r; i < right; i++) {
    if (l[i] == 0) {
      cnt0++;
    } else {
      cnt1++;
    }
  }
  ans += cnt0 + cnt1 * 2;
  cout << ans << endl;
  return 0;
}
