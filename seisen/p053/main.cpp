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
    int a;
    cin >> a;
    auto itr = lower_bound(l.begin(), l.end(), a);
    if (itr == l.end()) {
      l.push_back(a);
    } else {
      *itr = a;
    }
  }
  cout << l.size() << endl;
  return 0;
}
