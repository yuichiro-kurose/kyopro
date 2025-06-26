// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> d[i];
  }
  for (int i = 0; i < n - 1; i++) {
    int dist = 0;
    for (int j = i; j < n - 1; j++) {
      if (j > i) {
        cout << ' ';
      }
      dist += d[j];
      cout << dist;
    }
    cout << endl;
  }
  return 0;
}
