// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, int> mp;
  while (true) {
    bool f = false;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        f = true;
        mp[i]++;
        n /= i;
        break;
      }
    }
    if (!f) {
      mp[n]++;
      break;
    }
  }
  bool f = false, g = false;
  for (auto p : mp) {
    if (p.second == 1) {
      f = true;
    }
    if (p.second == 2) {
      g = true;
    }
  }
  if (mp.size() == 2 && f && g) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
