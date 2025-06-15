// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }
  vector<int> p, q;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      p.push_back(a[i] + b[j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for ( int j = 0; j < n; j++) {
      q.push_back(c[i] + d[j]);
    }
  }
  sort(q.begin(), q.end());
  for (int i = 0; i < p.size(); i++) {
    if (binary_search(q.begin(), q.end(), k - p[i])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
