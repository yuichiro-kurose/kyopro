// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
    if (a.size() >= 4) {
      bool f = true;
      for (int j = 0; j < 4; j++) {
        if (a[a.size() - 1 - j] != tmp) {
          f = false;
        }
      }
      if (f) {
        cnt++;
        for (int j = 0; j < 4; j++) {
          a.pop_back();
        }
      }
    }
  }
  cout << n - cnt * 4 << endl;
  return 0;
}
