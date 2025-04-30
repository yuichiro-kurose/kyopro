// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> l;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    auto itr = lower_bound(l.begin(), l.end(), c);
    if (itr == l.end()) {
      l.push_back(c);
    } else {
      *itr = c;
    }
  }
  cout << n - l.size() << endl;
  return 0;
}
