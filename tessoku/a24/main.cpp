// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> dp;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (dp.empty() || dp.back() < a) {
      dp.push_back(a);
    } else {
      *lower_bound(dp.begin(), dp.end(), a) = a;
    }
  }
  cout << dp.size() << endl;
  return 0;
}
