// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  double sum = 0;
  int div = 0;
  do {
    div++;
    for (int i = 1; i < n; i++) {
      sum += sqrt((x[p[i]] - x[p[i - 1]]) * (x[p[i]] - x[p[i - 1]]) + (y[p[i]] - y[p[i - 1]]) * (y[p[i]] - y[p[i - 1]]));
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << fixed << setprecision(9) << sum / div << endl;
  return 0;
}
