// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector<int> a(n * 2);
  for (int i = 0; i < n * 2; i++) {
    a[i] = i + 1;
  }
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    vector<int> na;
    if (k == 0) {
      for (int j = 0; j < n; j++) {
        na.push_back(a[j]);
        na.push_back(a[n + j]);
      }
    } else {
      for (int j = k; j < n * 2; j++) {
        na.push_back(a[j]);
      }
      for (int j = 0; j < k; j++) {
        na.push_back(a[j]);
      }
    }
    a = na;
  }
  for (int i = 0; i < n * 2; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
