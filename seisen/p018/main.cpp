// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int q;
  cin >> q;
  int ans = 0;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (binary_search(s.begin(), s.end(), t)) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
