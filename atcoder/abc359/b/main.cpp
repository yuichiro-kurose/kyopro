// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n * 2);
  for (int i = 0; i < n * 2; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 1; i < n * 2 - 1; i++) {
    if (a[i - 1] == a[i + 1]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
