// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  set<int> a, b;
  for (int i = 1; i <= 2 * n; i++) {
    b.insert(i);
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
    b.erase(x);
  }
  int now = 0;
  auto f = [&](set<int>& x) -> void {
    auto itr = x.upper_bound(now);
    if (itr == x.end()) {
      now = 0;
    } else {
      now = *itr;
      x.erase(itr);
    }
  };
  while (true) {
    f(a);
    if (a.empty()) {
      break;
    }
    f(b);
    if (b.empty()) {
      break;
    }
  }
  cout << b.size() << endl;
  cout << a.size() << endl;
  return 0;
}
