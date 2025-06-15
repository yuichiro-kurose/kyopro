// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<long long> a;
  for (int i = 2; i < 1 << 10; i++) {
    vector<int> tmp;
    for (int j = 0; j < 10; j++) {
      if ((i >> j) & 1) {
        tmp.push_back(j);
      }
    }
    long long now = 0;
    for (int j = 0; j < tmp.size(); j++) {
      now += (long long) tmp[j] * pow(10, j);
    }
    a.push_back(now);
  }
  sort(a.begin(), a.end());
  int k;
  cin >> k;
  cout << a[k - 1] << endl;
  return 0;
}
