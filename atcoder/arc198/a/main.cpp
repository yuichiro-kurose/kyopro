// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl << 1 << endl;
    return 0;
  }
  vector<int> ans;
  for (int i = 2; i <= n; i += 2) {
    ans.push_back(i);
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
