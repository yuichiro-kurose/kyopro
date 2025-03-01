// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    int ans = 1;
    for (int j = 0; j < n; j++) {
      if (i != j && a[i] > a[j]) {
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
