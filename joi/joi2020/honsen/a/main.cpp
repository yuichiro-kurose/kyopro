// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> a(n + 1);
  for (int i = 0; i < n + 1; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  vector<int> c(n + 1, 0);
  for (int i = 0; i < n; i++) {
    c[a[n].second] = max(c[a[n].second], a[i].first - b[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    c[a[i].second] = max(c[a[i + 1].second], a[i + 1].first - b[i]);
  }
  for (int i = 0; i < n + 1; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << c[i];
  }
  cout << endl;
  return 0;
}
