// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> box(n, 0), ans;
  while (q--) {
    int x;
    cin >> x;
    if (x == 0) {
      int mx = inf, idx = 0;
      for (int i = 0; i < n; i++) {
        if (box[i] < mx) {
          mx = box[i];
          idx = i;
        }
      }
      box[idx]++;
      ans.push_back(idx + 1);
    } else {
      box[x - 1]++;
      ans.push_back(x);
    }
  }
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
