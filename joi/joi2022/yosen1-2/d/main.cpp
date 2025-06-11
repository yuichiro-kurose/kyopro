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
  int ans = 0, mn = inf;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) {
        cnt++;
      }
    }
    if (mn > cnt) {
      mn = cnt;
      ans = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}
