// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<set<int>> p(n);
  set<int> use;
  set<int> idx;
  bool f = true;
  for (int i = 0; i < n; i++) {
    int t, x;
    cin >> t >> x;
    x--;
    if (t == 1) {
      p[x].insert(i);
    }
    if (t == 2) {
      idx.insert(i);
      if (p[x].empty()) {
        f = false;
      } else {
        use.insert(*p[x].rbegin());
        p[x].erase(*p[x].rbegin());
      }
    }
  }
  if (!f) {
    cout << -1 << endl;
    return 0;
  }
  vector<int> ans;
  int k = 0, now = 0;
  for (int i = 0; i < n; i++) {
    if (use.count(i)) {
      ans.push_back(1);
      now++;
    } else if (!idx.count(i)) {
      ans.push_back(0);
    }
    if (idx.count(i)) {
      now--;
    }
    k = max(k, now);
  }
  cout << k << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
