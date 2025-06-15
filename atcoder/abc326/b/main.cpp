// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> a;
  for (int i = 1; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      if (i * j <= 9) {
        a.push_back(i * 100 + j * 10 + i * j);
      }
    }
  }
  int n;
  cin >> n;
  cout << *lower_bound(a.begin(), a.end(), n) << endl;
  return 0;
}
