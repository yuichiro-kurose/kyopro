// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mp[a].push_back(i);
  }
  int ans = inf;
  for (auto p : mp) {
    vector<int> vec = p.second;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++) {
      ans = min(ans, vec[i + 1] - vec[i] + 1);
    }
  }
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
